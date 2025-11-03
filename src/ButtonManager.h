#ifndef BUTTON_MANAGER
#define BUTTON_MANAGER

#include <Arduino.h>

#define LEFT_BUTTON_BOTTOM 0
#define RIGHT_BUTTON_TOP 13
#define RIGHT_BUTTON_BOTTOM 10

class ButtonManager {
  int leftButton;
  int rightButtonTop;
  int rightButtonBottom;
public:
  ButtonManager();
  void update();
  void begin();
  bool leftButtonPressed;
  bool rightButtonTopPressed;
  bool rightButtonBottomPressed;
};

#endif