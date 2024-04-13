#include <Arduino.h>
#include "WiFi.h"

void setup() {
  Serial.begin(9600);
  WiFi.mode(WIFI_STA);
  Serial.println("Mac reader_>");
}

void loop() {
  Mimac();
  delay(5000);
}

void Mimac() {
  Serial.print("MiMAC_> ");
  Serial.println(WiFi.macAddress());
  delay(5000);
}
