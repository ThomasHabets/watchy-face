#ifndef SETTINGS_H
#define SETTINGS_H

watchySettings settings{
    // 2643743 London
    // 5128581 New York City
    // 2673722 Stockholm
    // — https://openweathermap.org/current#cityid
    //.cityID = "2673722",
    .cityID = "2643743",

    // TODO: switch API key.
    .weatherAPIKey = "f058fe1cad2afe8e2ddc5d063a64cecb",
    .weatherURL = "http://api.openweathermap.org/data/2.5/weather?id=",
    .weatherUnit = "metric",
    .weatherLang = "en",

    // must be greater than 5, measured in minutes
    .weatherUpdateInterval = 60,
    .ntpServer = "pool.ntp.org",
    .gmtOffset = 3600 * 2,
    .vibrateOClock = false,
};

#endif
