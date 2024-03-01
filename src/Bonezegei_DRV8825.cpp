/*
  This Library is written for DRV8825
  Author: Bonezegei (Jofel Batutay)
  Date: March 2024 
*/
#include "Bonezegei_DRV8825.h"

Bonezegei_DRV8825::Bonezegei_DRV8825(int dir, int step){
  _dir=dir;
  _step=step;
  _speed=500;
}

bool Bonezegei_DRV8825::begin(){
  pinMode(_dir, OUTPUT);
  pinMode(_step, OUTPUT);
  return 1;
}

void Bonezegei_DRV8825::setSpeed(unsigned long speed){
  _speed=speed/2;
}


void Bonezegei_DRV8825::step(int dir, int step){
  digitalWrite(_dir,dir);
  
  for(int a=0; a<step;  a++){
    digitalWrite(_step,LOW);
    delayMicroseconds(_speed);
    digitalWrite(_step,HIGH);
    delayMicroseconds(_speed);
  }
}
