/*
    File name:      main.h
    Description:    Header file declaring structures, functions, 
                    and library dependencies for the scheduler.
*/

/*
    Include Declarations
*/
#include <Arduino.h>
#include "HID.h"
#include "Keyboard.h"
#include "calibrations.h"

/*
    Variable Declarations
*/

extern struct HWIO Button;
extern struct HWIO Knob;
extern struct HWIO Toggle;

/*
    Function Declarations
*/

void ReadInputs_SendOutputs(void);
void Initialize_PinModes(void);
bool Dtrmn_b_KeyboardActive(void);