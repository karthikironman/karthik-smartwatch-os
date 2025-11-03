#ifndef DISPLAY_MANAGER
#define DISPLAY_MANAGER

#include <Arduino.h>
#include <Adafruit_GFX.h>
#include <Adafruit_GC9A01A.h>

class DisplayManager {
Adafruit_GC9A01A tft;
public:
  DisplayManager();
  void begin();
  void displayText(char* text);  // is this right ??
  void clearText();         //clean the screen
};
#endif