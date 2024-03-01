/*
  This Library is written for GSM
  Author: Bonezegei (Jofel Batutay)
  Date: March 2024 
*/
#include "Bonezegei_DRV8825.h"

Bonezegei_DRV8825::Bonezegei_DRV8825(int dir, int step){
  _dir=dir;
  _step=step;
}

bool Bonezegei_DRV8825::begin(){
  pinMode(_dir, OUTPUT);
  pinMode(_step, OUTPUT);
}

void Bonezegei_DRV8825::setSpeed(unsigned long speed){
  _speed=speed/2;
}


void Bonezegei_DRV8825::step(int dir, int step){
  digitalWrite(_dir,dir);
  
  for(int a=0; a<step;  a++){
    digitalWrite(_step,LOW);
    delayMicroSeconds(_speed);
    digitalWrite(_step,HIGH);
    delayMicroSeconds(_speed);
  }
}
