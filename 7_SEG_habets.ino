/*
#include <BLE.h>
#include <DSEG7_Classic_Bold_53.h>
#include <Display.h>
#include <Watchy.h>
#include <WatchyRTC.h>
#include <bma.h>
#include <bma4.h>
#include <bma423.h>
#include <bma4_defs.h>
*/
/* #include <config.h> */
#include "Watchy_7_SEG.h"
#include "settings.h"

Watchy7SEG watchy(settings);

void setup(){
  Serial.begin(115200);
  watchy.init();
}

void loop(){}



