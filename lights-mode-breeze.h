#ifndef LIGHTS_MODE_BREEZE_H
#define LIGHTS_MODE_BREEZE_H

#include <Arduino.h>
#include "lights.h"

class LightsModeBreeze {
  private:
    Lights *lights;
    int cycleDurationInMs;
    unsigned long cycleStartMillis;
  public:
    LightsModeBreeze(Lights *lights);
    void setup(int cycleDurationInMs);
    void loop();
};

#endif