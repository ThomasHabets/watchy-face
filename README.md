# Watchy 7SEG habets

Modified version of the example 7SEG.

## Disorganized notes

### Build using IDE

1. apt install python3-serial pip python3-venv 
1. python3 -m venv ~/opt/python3-venv 
1. ~/opt/python3-venv/bin/pip3 install esptool 
1. Download [latest Arduino IDE AppImage][ide] 
1. Set `File->Preferences->Additional Board Managers` to `https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json`
1. Open Tools > Board > Boards Manager and install the latest version of esp32 platform
  1. Actually, use 2.0.17
1. Under Sketch > Include Library > Manage Libraries, search for Watchy and install the latest version
  1. I used 1.4.10.
1. Make sure all the dependencies are updated to the latest version i.e. GxEPD2 , WiFiManager, rtc_pcf8563,etc.
1. Open the project `.ino`
1. Select Tools > Board > ESP32 Arduino > Watchy
1. Select Tools > Board Revision > Watchy v2.0
1. Select Tools > Partition Scheme > Huge App
1. In the top left, click the arrow pointing right (Upload).
1. Wait 100 years.

### Compile on command line

(doesn't work at the moment)

Re-flashing

```
~/opt/python3-venv/bin/esptool.py --chip esp32 --port /dev/ttyUSB0 --baud 921600 --before default_reset --after hard_reset write_flash -z --flash_mode dio --flash_freq 80m --flash_size 4MB 0x1000 /tmp\
/arduino/sketches/C9C363F2A7FEE3DF83C48556F544E476/7_SEG_habets.ino.bootloader.bin 0x8000 /tmp/arduino/sketches/C9C363F2A7FEE3DF83C48556F544E476/7_SEG_habets.ino.partitions.bin 0xe000 /home/thompa/.ar\
duino15/packages/esp32/hardware/esp32/2.0.17/tools/partitions/boot_app0.bin 0x10000 /tmp/arduino/sketches/C9C363F2A7FEE3DF83C48556F544E476/7_SEG_habets.ino.bin
```

[ide]: https://www.arduino.cc/en/software

https://watchy.sqfmi.com/docs/getting-started/
https://github.com/arduino/arduino-cli

