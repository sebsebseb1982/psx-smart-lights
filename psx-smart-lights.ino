#include "wifi-connection.h"
#include "ota.h"
#include "button.h"
#include "lights.h"
#include "buzzer.h"

void setup() {
  Serial.begin(115200);
  Serial.println("setup()");
  
  Button::setup();
  Lights::setup();
  Buzzer::setup();
  WiFiConnection::setup();
  OTA::setup();
}

void loop() {
  WiFiConnection::loop();
  OTA::loop();
  Button::loop();
  Lights::loop();
  Buzzer::loop();
}