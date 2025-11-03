#include "SerialManager.h"
#include <Arduino.h>

SerialManager sm;
SerialManager::SerialManager() {
}

void SerialManager::begin(int baudRate){
Serial.begin(baudRate);
delay(100);
}

void SerialManager::Println(const char* message) {
  Serial.println(message);
}