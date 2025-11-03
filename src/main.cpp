#include "DisplayManager.h"
#include "ButtonManager.h"
#include "SerialManager.h"

ButtonManager btn;
DisplayManager dm;

void setup() {
  sm.begin(115200);
  btn.begin();
  dm.begin();
}

void loop() {
  Serial.println("loop1");
  sm.Println("loop");
  // put your main code here, to run repeatedly:
  btn.update();
  if(btn.leftButtonPressed){
    sm.Println("left pressed");
    dm.displayText("Left");
    delay(100);
    dm.clearText();
  }else if(btn.rightButtonTopPressed){
    sm.Println("right 1 pressed");
    dm.displayText("right 1");
    delay(100);
    dm.clearText();
  }else if(btn.rightButtonBottomPressed){
    sm.Println("right 2 pressed");
    dm.displayText("right 2");
    delay(100);
    dm.clearText();
  }else{
    sm.Println("nothing pressed");
    dm.displayText("nothing");
    delay(100);
    dm.clearText();
  }
}
