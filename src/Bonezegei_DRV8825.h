/*
  This Library is written for DRV8825
  Author: Bonezegei (Jofel Batutay)
  Date: March 2024 
*/
#ifndef _BONEZEGEI_DRV8825_H_
#define _BONEZEGEI_DRV8825_H_

#include <Arduino.h>

class Bonezegei_DRV8825{
public:
  //param1 = Dir Pin Direction Pin
  //param2 = Step Pin 
  Bonezegei_DRV8825(int dir, int step);
  bool begin();

  //speed in Micro Seconds
  void setSpeed(unsigned long speed);

  // param1 = Direction of rotation
  // param2 = Number of Steaps
  void step(int dir, int step);

  unsigned long _speed;
  int _dir;
  int _step;
};

#endif
