#ifndef WIFI_CONNECTION_H
#define WIFI_CONNECTION_H

#include <Arduino.h>
#include "lights.h"

class WiFiConnection {
  public:
    static unsigned int nbConnection;
    static void setup(Lights *lights);
    static void loop(Lights *lights);
};

#endif