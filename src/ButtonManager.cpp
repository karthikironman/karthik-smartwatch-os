#include "buttonManager.h"

#include "SerialManager.h"


ButtonManager::ButtonManager()
  : leftButton(LEFT_BUTTON_BOTTOM), rightButtonTop(RIGHT_BUTTON_TOP), rightButtonBottom(RIGHT_BUTTON_BOTTOM), leftButtonPressed(false), rightButtonTopPressed(false), rightButtonBottomPressed(false) {
}

void ButtonManager::begin() {
  pinMode(leftButton, INPUT_PULLUP);
  pinMode(rightButtonTop, INPUT_PULLDOWN);
  pinMode(rightButtonBottom, INPUT_PULLDOWN);
}
void ButtonManager::update() {
  sm.Println("left button : ");
  sm.Println(digitalRead(leftButton) == LOW ? "presed" : "--");
  sm.Println("rightButtonTop : ");
  sm.Println(digitalRead(rightButtonTop) == HIGH ? "presed" : "--");
  sm.Println("rightButtonBottom : ");
  sm.Println(digitalRead(rightButtonBottom) == HIGH ? "presed" : "--");

  leftButtonPressed = (digitalRead(leftButton) == LOW) ? 1 : 0;
  rightButtonTopPressed = (digitalRead(rightButtonTop) == HIGH) ? 1 : 0;
  rightButtonBottomPressed = (digitalRead(rightButtonBottom) == HIGH) ? 1 : 0;
}
