#include <Arduino.h>
#include "WiFi.h"

void setup(){
  Serial.begin(9600);
  WiFi.mode(WIFI_STA);
  Serial.println(WiFi.macAddress());
}
void loop(){
  Serial.println(WiFi.macAddress());
  delay(5000);
}