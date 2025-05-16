#include "esp32-hal-ledc.h"
#include "buzzer.h"

#define buzzerPin 26

unsigned long Buzzer::stopBeepMillis = 0UL;
unsigned int Buzzer::currentLevel = 0;

void Buzzer::setup() {
  pinMode(buzzerPin, OUTPUT);
}

void Buzzer::on() {
  digitalWrite(buzzerPin, HIGH);
}

void Buzzer::off() {
digitalWrite(buzzerPin, LOW);
}

void Buzzer::loop() {
  if (Buzzer::stopBeepMillis != 0UL && millis() > stopBeepMillis) {
    off();
  }
}



void Buzzer::beep(int durationInMs) {
  Buzzer::stopBeepMillis = millis() + durationInMs;
  on();
}