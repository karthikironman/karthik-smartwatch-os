#include "DisplayManager.h"
#include "SerialManager.h"


DisplayManager::DisplayManager():tft(5, 12, 33)  // TFT_CS, TFT_DC, TFT_RST
{
 
}
void DisplayManager::begin(){
  sm.Println("Display Manager Constructor");
  tft.begin();
  tft.fillScreen(GC9A01A_BLACK);
  tft.setTextColor(GC9A01A_WHITE);
  tft.setTextSize(2);
}

void DisplayManager::displayText(char* text) {
  tft.fillScreen(GC9A01A_BLACK);
  tft.setCursor(20, 120);  // adjust position as you like
  tft.print(text);
}

void DisplayManager::clearText() {
  tft.fillScreen(GC9A01A_RED);
}
