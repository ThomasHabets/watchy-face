#include "Watchy_7_SEG.h"

#define DARKMODE false

const uint8_t BATTERY_SEGMENT_WIDTH = 7;
const uint8_t BATTERY_SEGMENT_HEIGHT = 11;
const uint8_t BATTERY_SEGMENT_SPACING = 9;
const uint8_t WEATHER_ICON_WIDTH = 48;
const uint8_t WEATHER_ICON_HEIGHT = 32;
constexpr int errmsg_len = 32;
RTC_DATA_ATTR char errmsg[errmsg_len] = "Booted OK";

RTC_DATA_ATTR long main_utc_offset = 0;
RTC_DATA_ATTR long sea_utc_offset = 0;
RTC_DATA_ATTR long nyc_utc_offset = 0;
extern RTC_DATA_ATTR long gmtOffset;

// Watchy connectWiFi() doesn't support timeouts.
bool connect_wifi(int ms)
{
    Serial.println("Connecting to wifi");
    if (WL_CONNECT_FAILED == WiFi.begin()) {
        Serial.println("wifi begin failed");
        return false;
    }
    const int ret = WiFi.waitForConnectResult(ms);
    if (WL_CONNECTED == ret) {
        Serial.println("wifi connected");
        return true;
    }
    Serial.println("wifi connection failed: " + String(ret));
    WiFi.mode(WIFI_OFF);
    btStop();
    return false;
}

void Watchy7SEG::do_update()
{
        set_error("Updating...");
        vibMotor(150, 2);

        // Connect to wifi. 5 second timeout.
        if (!connect_wifi(5000)) {
            set_error("wifi fail");
            return;
        }

        // Send a packet.
        WiFiUDP udp;
        uint16_t local_port = 12345;
        if (!udp.begin(local_port)) {
            set_error("UDP Begin");
            return;
        }
        if (!udp.beginPacket("cement.retrofitta.se", 12312)) {
            set_error("beginpacket");
            return;
        }
        String msg = "hello world";
        if (msg.length() != udp.write((const uint8_t*)msg.c_str(), msg.length())) {
            set_error("short write");
            return;
        }
        if (!udp.endPacket()) {
            set_error("endpacket");
            return;
        }
        udp.flush();

	// Receive reply.
	int cb;
	for (int c = 0; c < 100; c++) {
	  delay(10);
	  cb = udp.parsePacket();
	  if (cb) {
	    break;
	  }
	}
	if (!cb) {
	  Serial.println("Timeout getting UDP.");
	} else {
	  char buf[128];
	  const int n = udp.read(buf, sizeof(buf));
	  if (n >= 4) {
	    Serial.print("Main UTC offset set: ");
	    Serial.print(main_utc_offset, DEC);
	    main_utc_offset = ntohl(*(uint32_t*)buf);
	    Serial.print(" -> ");
	    Serial.println(main_utc_offset, DEC);
	  } else {
	    Serial.println("UDP packet too short");
	  }
	  if (n >= 8) {
	    Serial.print("SEA UTC offset set: ");
	    Serial.print(sea_utc_offset, DEC);
	    sea_utc_offset = ntohl(*((uint32_t*)buf + 1));
	    Serial.print(" -> ");
	    Serial.println(sea_utc_offset, DEC);
	  }
	  if (n >= 12) {
	    Serial.print("NYC UTC offset set: ");
	    Serial.print(nyc_utc_offset, DEC);
	    nyc_utc_offset = ntohl(*((uint32_t*)buf + 2));
	    Serial.print(" -> ");
	    Serial.println(nyc_utc_offset, DEC);
	  }
	}
	gmtOffset = main_utc_offset;
	syncNTP();
	    
	// Shut down.
        udp.stop();

        // Get weather data. 3 second timeout.
        Serial.println("Getting weather data.");
        //getWeatherData();
	drawWeather();
	gmtOffset = main_utc_offset;
        WiFi.mode(WIFI_OFF);
        vibMotor(150, 2);
        set_error("Update done");
}

void Watchy7SEG::set_error(const char* msg)
{
    Serial.println(String("Face message: ") + msg);
    strlcpy(errmsg, msg, errmsg_len);
    drawWatchFace();
    display.display(true);
}

void Watchy7SEG::drawWatchFace()
{
  gmtOffset = main_utc_offset;
  
    if (!currentTime.Year) {
        RTC.read(currentTime);
    }

    display.fillScreen(DARKMODE ? GxEPD_BLACK : GxEPD_WHITE);
    display.setTextColor(DARKMODE ? GxEPD_WHITE : GxEPD_BLACK);
    drawTime();
    drawDate();
    // drawSteps();
    if (!*errmsg) {
        drawMTV();
    } else {
        drawErrorMessage();
    }

    drawWeather();
    drawBattery();
    const bool connected = WiFi.status() == WL_CONNECTED;
    // WIFI_CONFIGURED ? wifi : wifioff
    display.drawBitmap(120,
                       77,
                       connected ? wifi : wifioff,
                       26,
                       18,
                       DARKMODE ? GxEPD_WHITE : GxEPD_BLACK);
    if (BLE_CONFIGURED) {
        display.drawBitmap(
            100, 75, bluetooth, 13, 21, DARKMODE ? GxEPD_WHITE : GxEPD_BLACK);
    }
}

void Watchy7SEG::drawTime()
{
    display.setFont(&DSEG7_Classic_Bold_53);
    display.setCursor(5, 53 + 5);
    int displayHour;
    if (HOUR_12_24 == 12) {
        displayHour = ((currentTime.Hour + 11) % 12) + 1;
    } else {
        displayHour = currentTime.Hour;
    }
    if (displayHour < 10) {
        display.print("0");
    }
    display.print(displayHour);
    display.print(":");
    if (currentTime.Minute < 10) {
        display.print("0");
    }
    display.println(currentTime.Minute);
}

void Watchy7SEG::drawDate()
{
    display.setFont(&Seven_Segment10pt7b);

    int16_t x1, y1;
    uint16_t w, h;

    String dayOfWeek = dayStr(currentTime.Wday);
    display.getTextBounds(dayOfWeek, 5, 85, &x1, &y1, &w, &h);
    if (currentTime.Wday == 4) {
        w = w - 5;
    }
    display.setCursor(85 - w, 85);
    display.println(dayOfWeek);

    String month = monthShortStr(currentTime.Month);
    display.getTextBounds(month, 60, 110, &x1, &y1, &w, &h);
    display.setCursor(85 - w, 110);
    display.println(month);

    display.setFont(&DSEG7_Classic_Bold_25);
    display.setCursor(5, 120);
    if (currentTime.Day < 10) {
        display.print("0");
    }
    display.println(currentTime.Day);
    display.setCursor(5, 150);
    display.println(tmYearToCalendar(
        currentTime.Year)); // offset from 1970, since year is stored in uint8_t
}

String double_string(int n)
{
    if (n < 10) {
        return String("0") + n;
    }
    return String(n);
}
void Watchy7SEG::print_time(int hour_ofs)
{
    int hour = currentTime.Hour + hour_ofs;
    if (hour < 0) {
        hour += 24;
    }
    display.print(double_string(hour));
    display.print(":");
    display.print(double_string(currentTime.Minute));
}
void Watchy7SEG::drawErrorMessage()
{
    display.setFont(&Seven_Segment10pt7b);
    display.setCursor(0, 175);
    display.println(errmsg);
}
void Watchy7SEG::drawMTV()
{
    // display.setFont(&DSEG7_Classic_Bold_25);
    display.setFont(&Seven_Segment10pt7b);

    display.setCursor(0, 175);
    display.println("SEA");
    display.setCursor(0, 195);
    print_time(sea_utc_offset / 3600);

    display.setCursor(50, 175);
    display.println("NYC");
    display.setCursor(50, 195);
    print_time(nyc_utc_offset / 3600);

    display.setCursor(100, 175);
    display.println("UTC");
    display.setCursor(100, 195);
    print_time(-main_utc_offset / 3600);
}
void Watchy7SEG::drawSteps()
{
    // reset step counter at midnight
    if (currentTime.Hour == 0 && currentTime.Minute == 0) {
        sensor.resetStepCounter();
    }
    uint32_t stepCount = sensor.getCounter();
    display.drawBitmap(10, 165, steps, 19, 23, DARKMODE ? GxEPD_WHITE : GxEPD_BLACK);
    display.setCursor(35, 190);
    display.println(stepCount);
}
void Watchy7SEG::drawBattery()
{
  //float blow = SRTC.getRTCBattery(true);
  const float VBAT = getBatteryVoltage();
  /*
  float blow = 3.8;
  float size = ((getBatteryVoltage() - blow) / (4.2 - blow)) + 0.34;
  */
  const float min_bat = 3.2;
  const float max_bat = 4.2;
  float size = (VBAT - min_bat) / (max_bat - min_bat); 
  // size should now be a value between 0 (empty) and 1 (full).
  //}
  if (size < 0) {
    size = 0.0;
  }
  if (size > 1) {
    size = 1.0;
  }
  if (false) {
    display.drawBitmap(154, 73, battery, 37, 21, DARKMODE ? GxEPD_WHITE : GxEPD_BLACK);
  }
    display.fillRect(159,
                     78,
                     27,
                     BATTERY_SEGMENT_HEIGHT,
                     DARKMODE ? GxEPD_BLACK : GxEPD_WHITE); // clear battery segments
    int8_t batteryLevel = 0;
    //float VBAT = getBatteryVoltage();
    if (true) {
      display.setFont(&Seven_Segment10pt7b);
      display.setCursor(150, 78);
      display.print(int(100.0 * size));
      display.println("%");
      display.setCursor(150, 95);
      display.print(VBAT);
      display.print("V");
      return;
    }
    if (VBAT > 4.1) {
        batteryLevel = 3;
    } else if (VBAT > 3.95 && VBAT <= 4.1) {
        batteryLevel = 2;
    } else if (VBAT > 3.80 && VBAT <= 3.95) {
        batteryLevel = 1;
    } else if (VBAT <= 3.80) {
        batteryLevel = 0;
    }

    for (int8_t batterySegments = 0; batterySegments < batteryLevel; batterySegments++) {
        display.fillRect(159 + (batterySegments * BATTERY_SEGMENT_SPACING),
                         78,
                         BATTERY_SEGMENT_WIDTH,
                         BATTERY_SEGMENT_HEIGHT,
                         DARKMODE ? GxEPD_WHITE : GxEPD_BLACK);
    }
}

void Watchy7SEG::handleButtonPress()
{
    if (guiState != WATCHFACE_STATE) {
        Serial.println("Not on watchface, ignoring button");
        Watchy::handleButtonPress();
        return;
    }
    const uint64_t wakeupBit = esp_sleep_get_ext1_wakeup_status();
    if (wakeupBit & BACK_BTN_MASK) {
        Serial.println("Button: Back");
        set_error("");
        return;
    }
    if (wakeupBit & UP_BTN_MASK) {
        Serial.println("Button: Up");
        vibMotor(75, 4);
        set_error("Button up test");
        return;
    }
    if (wakeupBit & DOWN_BTN_MASK) {
      do_update();
        return;
    }
    Serial.println("Other button. Passing along.");
    Watchy::handleButtonPress();
}
void Watchy7SEG::drawWeather()
{
    // TODO: may block for 60s waiting for wifi.
    weatherData currentWeather = getWeatherData();
    gmtOffset = main_utc_offset;
    if (!currentWeather.weatherConditionCode) {
      return;
    }

    int8_t temperature = currentWeather.temperature;
    int16_t weatherConditionCode = currentWeather.weatherConditionCode;

    display.setFont(&DSEG7_Classic_Regular_39);
    int16_t x1, y1;
    uint16_t w, h;
    display.getTextBounds(String(temperature), 0, 0, &x1, &y1, &w, &h);
    if (159 - w - x1 > 87) {
        display.setCursor(159 - w - x1, 150);
    } else {
        display.setFont(&DSEG7_Classic_Bold_25);
        display.getTextBounds(String(temperature), 0, 0, &x1, &y1, &w, &h);
        display.setCursor(159 - w - x1, 136);
    }
    display.println(temperature);
    display.drawBitmap(165,
                       110,
                       currentWeather.isMetric ? celsius : fahrenheit,
                       26,
                       20,
                       DARKMODE ? GxEPD_WHITE : GxEPD_BLACK);
    const unsigned char* weatherIcon;

    // https://openweathermap.org/weather-conditions
    if (weatherConditionCode > 801) { // Cloudy
        weatherIcon = cloudy;
    } else if (weatherConditionCode == 801) { // Few Clouds
        weatherIcon = cloudsun;
    } else if (weatherConditionCode == 800) { // Clear
        weatherIcon = sunny;
    } else if (weatherConditionCode >= 700) { // Atmosphere
        weatherIcon = atmosphere;
    } else if (weatherConditionCode >= 600) { // Snow
        weatherIcon = snow;
    } else if (weatherConditionCode >= 500) { // Rain
        weatherIcon = rain;
    } else if (weatherConditionCode >= 300) { // Drizzle
        weatherIcon = drizzle;
    } else if (weatherConditionCode >= 200) { // Thunderstorm
        weatherIcon = thunderstorm;
    } else
        return;
    display.drawBitmap(150,
                       163,
                       weatherIcon,
                       WEATHER_ICON_WIDTH,
                       WEATHER_ICON_HEIGHT,
                       DARKMODE ? GxEPD_WHITE : GxEPD_BLACK);
}
