#include "esp32-hal-gpio.h"
#include "lights.h"

#define TRIANGLE_LIGHT_PIN 12
#define CIRCLE_LIGHT_PIN 13
#define CROSS_LIGHT_PIN 27
#define SQUARE_LIGHT_PIN 14

void Lights::setup() {
  pinMode(TRIANGLE_LIGHT_PIN, OUTPUT);
  pinMode(CIRCLE_LIGHT_PIN, OUTPUT);
  pinMode(CROSS_LIGHT_PIN, OUTPUT);
  pinMode(SQUARE_LIGHT_PIN, OUTPUT);
}

void Lights::loop() {
}

void Lights::setTriangleLightStatus(int status) {
  digitalWrite(TRIANGLE_LIGHT_PIN, status);
}

void Lights::setCircleLightStatus(int status) {
  digitalWrite(CIRCLE_LIGHT_PIN, status);
}

void Lights::setCrossLightStatus(int status) {
  digitalWrite(CROSS_LIGHT_PIN, status);
}

void Lights::setSquareLightStatus(int status) {
  digitalWrite(SQUARE_LIGHT_PIN, status);
}