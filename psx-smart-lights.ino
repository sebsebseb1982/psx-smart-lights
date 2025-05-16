#include "wifi-connection.h"
#include "ota.h"
#include "button.h"
#include "lights.h"
#include "lights-mode-breeze.h"
#include "buzzer.h"

Lights lights;
LightsModeBreeze lightsModeBreeze(&lights);

void setup() {
  Serial.begin(115200);
  Serial.println("setup()");
  Buzzer::setup();
  Button::setup();
  lights.setup();
  WiFiConnection::setup(&lights);
  lightsModeBreeze.setup(12000);
  OTA::setup();
}

void loop() {
  WiFiConnection::loop(&lights);
  OTA::loop();
  Button::loop();
  lights.loop();
  lightsModeBreeze.loop();
  Buzzer::loop();
}