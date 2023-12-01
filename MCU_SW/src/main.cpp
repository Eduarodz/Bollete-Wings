/* 
    File name:      main.cpp
    Description:    Implements the main logic and scheduler 
                    for the keyboard controller.
 */

#include "main.h"

void setup() {

  Serial.begin(9600);

  Initialize_PinModes();
}

void loop() {
  
  ReadInputs_SendOutputs();

}

void ReadInputs_SendOutputs(void)
{
  int i;
  
  if((Dtrmn_b_KeyboardActive() == true))
  {
    for (i = 0; i < Button.NumOfInputs; i++)
    {
      if (digitalRead(Button.InputPin[i]) == LOW)
      {
        Keyboard.press(Button.KeyboardMapping[i]);
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
        Keyboard.press(Knob.KeyboardMapping[i]);
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
        Keyboard.press(Toggle.KeyboardMapping[i]);
      }
      else
      {
        Keyboard.release(Toggle.KeyboardMapping[i]);
      }
    }
  }
}

void Initialize_PinModes(void)
{
  int i;

  for (i = 0; i < Button.NumOfInputs; i++)
  {
    pinMode(Button.InputPin[i], INPUT_PULLUP);
  }

  for (i = 0; i < Knob.NumOfInputs; i++)
  {
    pinMode(Knob.InputPin[i], INPUT_PULLUP);
  }

  for (i = 0; i < Toggle.NumOfInputs; i++)
  {
    pinMode(Toggle.InputPin[i], INPUT_PULLUP);
  }

  pinMode(KeyboardActivePin, INPUT_PULLUP);
}

bool Dtrmn_b_KeyboardActive(void)
{
  bool KeyboardActive;

  if(digitalRead(KeyboardActivePin) == LOW)
  {
    Keyboard.begin();
    KeyboardActive = true;
  }
  else
  {
    Keyboard.end();
    KeyboardActive = false;
  }

  return KeyboardActive;
}