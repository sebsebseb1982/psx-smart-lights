#include <WiFi.h>
#include "wifi-connection.h"
#include "secrets.h"
#include "lights.h"

unsigned int WiFiConnection::nbConnection = 0;

void WiFiConnection::setup(Lights *lights) {
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  //Serial.print("Connexion en cours ");
  int retry = 0; 
  while (WiFi.status() != WL_CONNECTED) {
    for (int i = 0; i < 256; i++) {
      lights->dim(i);
      delay(1);
    }

    for (int i = 255; i >= 0; i--) {
      lights->dim(i);
      delay(1);
    }

    retry ++;

    if(retry == 20) {
      ESP.restart();
    }
    //Serial.print(".");
  }
  lights->off();
  nbConnection++;
  Serial.println("");
  Serial.print("Connecté au WIFI avec l'adresse IP : ");
  Serial.println(WiFi.localIP());
}

void WiFiConnection::loop(Lights *lights) {
  if(WiFi.status() != WL_CONNECTED) {
    setup(lights);
  }
}
