#ifndef LIGHTS_H
#define LIGHTS_H

#include <Arduino.h>
#include "light.h"

class Lights {
  private:
    Light triangle;
    Light circle;
    Light cross;
    Light square;
  public:
    Lights(void);
    void setup();
    void loop();
    void on();
    void dim(int brightness);
    void off();
    void breeze(int cycleDurationInMs);
};

#endif