#ifndef WATCHY_7_SEG_H
#define WATCHY_7_SEG_H

#include "DSEG7_Classic_Bold_25.h"
#include "DSEG7_Classic_Regular_15.h"
#include "DSEG7_Classic_Regular_39.h"
#include "Seven_Segment10pt7b.h"
#include "icons.h"
#include <Watchy.h>

class Watchy7SEG : public Watchy
{
    using Watchy::Watchy;

public:
    void drawWatchFace();
    void drawTime();
    void drawDate();
    void drawSteps();
    void drawWeather();
    void drawBattery();
    void drawMTV();

private:
    void print_time(int hour_ofs);
    void handleButtonPress() override;

private:
    void drawErrorMessage();
    void set_error(const char* msg);

    // String error_message_;
};

#endif
