#include "esp32-hal-gpio.h"
#include "lights.h"
#include "light.h"

#define TRIANGLE_LIGHT_PIN 12
#define CIRCLE_LIGHT_PIN 13
#define CROSS_LIGHT_PIN 27
#define SQUARE_LIGHT_PIN 14

Lights::Lights(void)
  : triangle(TRIANGLE_LIGHT_PIN, 0),
    circle(CIRCLE_LIGHT_PIN, 1),
    cross(CROSS_LIGHT_PIN, 2),
    square(SQUARE_LIGHT_PIN, 3) {
}

void Lights::setup() {
}

void Lights::loop() {
}


void Lights::on() {
  this->triangle.on();
  this->circle.on();
  this->cross.on();
  this->square.on();
}

void Lights::dim(int brightness) {
  this->triangle.dim(brightness);
  this->circle.dim(brightness);
  this->cross.dim(brightness);
  this->square.dim(brightness);
}

void Lights::off() {
  this->triangle.off();
  this->circle.off();
  this->cross.off();
  this->square.off();
}

void Lights::breeze(int cycleDurationInMs) {

}
