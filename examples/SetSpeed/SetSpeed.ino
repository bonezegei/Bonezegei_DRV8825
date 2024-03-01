/*
  This Library is written for GSM
  Author: Bonezegei (Jofel Batutay)
  Date: March 2023 
*/

#include <Bonezegei_DRV8825.h>

#define FORWARD 1
#define REVERSE 0

#define PIN_DIR  8
#define PIN_STEP 9

Bonezegei_DRV8825 stepper(PIN_DIR, PIN_STEP);

void setup(){
  stepper.begin();
  
  //Speed microseconds per step
  stepper.setSpeed(1000); 
}

void loop(){
  stepper.step(FORWARD, 200);
  delay(1000);
  stepper.step(REVERSE, 200);
  delay(1000);
}
