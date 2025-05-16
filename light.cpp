#include "light.h"

#define defaultFrequency 500  //Fréquence PWM de 1 KHz
#define resolution 8          // Résolution de 8 bits, 256 valeurs possibles

Light::Light(int pin, int pwmChannel) {
  this->pin = pin;
  this->pwmChannel = pwmChannel;
  this->setup();
}

void Light::setup() {
  ledcAttach(
    this->pin,
    defaultFrequency,
    resolution);
}

void Light::loop() {
}

void Light::on() {
  ledcWriteChannel(
    this->pwmChannel,
    255);
}

void Light::dim(int brightness) {
  ledcWriteChannel(
    this->pwmChannel,
    brightness);
}

void Light::off() {
  ledcWriteChannel(
    this->pwmChannel,
    0);
}