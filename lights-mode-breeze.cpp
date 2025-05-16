#include "lights-mode-breeze.h"

LightsModeBreeze::LightsModeBreeze(Lights *lights) {
  this->lights = lights;
}

void LightsModeBreeze::setup(int cycleDurationInMs) {
  this->cycleDurationInMs = cycleDurationInMs;
  this->cycleStartMillis = millis();
}

void LightsModeBreeze::loop() {
  int cycleLength = (millis() - this->cycleStartMillis) % this->cycleDurationInMs;
  float cycleLengthRatio = (cycleLength * 1.0 / this->cycleDurationInMs * 1.0);
  int brightness = cycleLengthRatio < 0.5 ? cycleLengthRatio * 2.0 * 255.0 : (1.0-cycleLengthRatio) * 2.0 * 255.0;
  this->lights->dim(brightness);
}