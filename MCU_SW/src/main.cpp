/* 
    File name:      main.cpp
    Description:    In this file we have the scheduler
 */

#include "main.h"

void setup() {

  Serial.begin(9600);

  Keyboard.begin();
  InitializePinModes();
}

void loop() {
  
  ReadInputsSendOuput();
  
}

void ReadInputsSendOuput(void)
{
  int i;

  for (i = 0; i < Button.NumOfInputs; i++)
  {
    if (digitalRead(Button.InputPin[i]) == LOW)
    {
      Keyboard.write(Button.KeyboardMapping[i]);
    }
    else
    {
      Keyboard.release(Button.KeyboardMapping[i]);
    }
  }

  for (i = 0; i < Knob.NumOfInputs; i++)
  {
    if (digitalRead(Knob.InputPin[i]) == LOW)
    {
      Keyboard.write(Knob.KeyboardMapping[i]);
    }
    else
    {
      Keyboard.release(Knob.KeyboardMapping[i]);
    }
  }

  for (i = 0; i < Toggle.NumOfInputs; i++)
  {
    if (digitalRead(Toggle.InputPin[i]) == LOW)
    {
      Keyboard.write(Toggle.KeyboardMapping[i]);
    }
    else
    {
      Keyboard.release(Toggle.KeyboardMapping[i]);
    }
  }
}

void InitializePinModes(void)
{
  int i;

  for (i = 0; i < Button.NumOfInputs; i++)
  {
    pinMode(Button.InputPin[i], INPUT);
  }

  for (i = 0; i < Knob.NumOfInputs; i++)
  {
    pinMode(Knob.InputPin[i], INPUT);
  }

  for (i = 0; i < Toggle.NumOfInputs; i++)
  {
    pinMode(Toggle.InputPin[i], INPUT);
  }
}