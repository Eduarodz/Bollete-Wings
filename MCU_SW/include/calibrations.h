/*
    File name:      calibrations.h
    Description:    Stores calibration parameters and hardware 
                    configurations for buttons, knobs, toggles, 
                    and the power switch.
*/

/*
    Include Declarations
*/

#include "Arduino.h"

/*
    Struct Declarations
*/

struct HWIO
{
    const int NumOfInputs;            // Single value, Number of Inputs (ie num of buttons)
    const String FunctionName[2];      // Name of the functionality mapped to this interface (ie Heading, Flaps)
    const int InputPin[2];             // Pin where data is read from
    const char KeyboardMapping[2];     // Map the Pin to the desired Keyboard output
};

/*
    Variable Definitions
*/

/* Panel Buttons */
    HWIO Button = {2, {"APEnbl", "APSlct"}, {4, 5} , { 'p', 'o'}};
/* Panel Knobs */
    HWIO Knob = {2, {"HDGEnbl", "HDGSlct"}, {6, 7}, {'h', 'j'}};
/* Panel Toggles */
    HWIO Toggle = {2, {"Flaps", "LandingGear"}, {8, 9}, {'f', 'd'}};
/* Panel On/Off Switch */
    extern const int KeyboardActivePin = 10;