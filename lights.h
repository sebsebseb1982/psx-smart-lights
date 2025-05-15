#ifndef LIGHTS_H
#define LIGHTS_H

#include <Arduino.h>

class Lights {
  public:
    static void setup();
    static void loop();
    static void setTriangleLightStatus(int status);
    static void setCircleLightStatus(int status);
    static void setCrossLightStatus(int status);
    static void setSquareLightStatus(int status);
};

#endif