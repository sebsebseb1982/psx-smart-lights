#include <WiFi.h>
#include "wifi-connection.h"
#include "secrets.h"
#include "lights.h"

unsigned int WiFiConnection::nbConnection = 0;

void WiFiConnection::setup() {
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  //Serial.print("Connexion en cours ");
  int retry = 0; 
  while (WiFi.status() != WL_CONNECTED) {
    Lights::setTriangleLightStatus(HIGH);
    Lights::setCircleLightStatus(HIGH);
    Lights::setCrossLightStatus(HIGH);
    Lights::setSquareLightStatus(HIGH);
    delay(250);
    Lights::setTriangleLightStatus(LOW);
    Lights::setCircleLightStatus(LOW);
    Lights::setCrossLightStatus(LOW);
    Lights::setSquareLightStatus(LOW);
    delay(250);

    retry ++;

    if(retry == 20) {
      ESP.restart();
    }
    //Serial.print(".");
  }
  nbConnection++;
  Serial.println("");
  Serial.print("Connecté au WIFI avec l'adresse IP : ");
  Serial.println(WiFi.localIP());
}

void WiFiConnection::loop() {
  if(WiFi.status() != WL_CONNECTED) {
    setup();
  }
}
