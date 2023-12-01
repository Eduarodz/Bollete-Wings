/* 
    File name:      main.cpp
    Description:    In this file we have the scheduler
 */

#include "main.h"

// put function declarations here:
int myFunction(int, int);

void setup() {

  int i;

/* Initialize Pins for Button Inputs */
  for (i = 0; i < (sizeof(ButtonInputs) / sizeof(ButtonInputs[0])); ++i)
  {
      pinMode(ButtonInputs[i], INPUT);
      printf(ButtonInputs[i]);
  }

/* Initialize Pins for Knob Inputs */
  for (i = 0; i < (sizeof(KnobInputs) / sizeof(KnobInputs[0])); ++i)
  {
      pinMode(KnobInputs[i], INPUT);
      printf(KnobInputs[i]);
  }

/* Initialize Pins for Toggle Inputs */
  for (i = 0; i < (sizeof(ToggleInputs) / sizeof(ToggleInputs[0])); ++i)
  {
      pinMode(ToggleInputs[i], INPUT);
      printf(ToggleInputs[i]);
  }  
}

void loop() {
  // put your main code here, to run repeatedly:
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}