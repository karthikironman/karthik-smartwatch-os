#ifndef SERIAL_MANAGER_H
#define SERIAL_MANAGER_H

class SerialManager{
  public:
  SerialManager();
  void Println(const char* message);
  void begin(int baudRate);
};
extern SerialManager sm;

#endif