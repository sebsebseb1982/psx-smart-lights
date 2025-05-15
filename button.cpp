#include "esp32-hal-gpio.h"
#include "button.h"
#include "lights.h"
#include "buzzer.h"

#define BUTTON_PIN 25

void Button::setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);
}

void Button::loop() {
  if(digitalRead(BUTTON_PIN) == LOW) {
    Lights::setCrossLightStatus(HIGH);
    Buzzer::on();
  } else {
    Lights::setCrossLightStatus(LOW);
    Buzzer::off();
  }
}