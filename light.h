#ifndef LIGHT_H
#define LIGHT_H

#include <Arduino.h>

class Light {
  private:
    int pin;
    int pwmChannel;
  public:
    Light(int pin, int pwmChannel);
    void setup();
    void loop();
    void on();
    void dim(int brightness);
    void off();
};

#endif