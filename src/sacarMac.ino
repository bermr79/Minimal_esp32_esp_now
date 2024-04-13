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
  //Serial.print("MiMAC_> ");
  String macAddress = WiFi.macAddress();
  //Serial.println(macAddress);

  // Convertir la dirección MAC a un arreglo de bytes
  byte arreglo[6];
  int index = 0;
  for (int i = 0; i < macAddress.length(); i += 3) {
    String byteHex = macAddress.substring(i, i + 2);
    arreglo[index++] = strtol(byteHex.c_str(), NULL, 16);
  }

  // Imprimir el arreglo de bytes
  Serial.print("El resultado mi broadcastAddres: { ");
  for (int i = 0; i < 6; i++) {
    Serial.print("0x");
    Serial.print(arreglo[i], HEX);
    if (i < 5) {
      Serial.print(", ");
    }
  }
  Serial.println(" }");
  Serial.println(" ");
}
