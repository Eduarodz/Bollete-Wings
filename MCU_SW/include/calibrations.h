/*
    File name:      calibrations.h
    Description:    Calibration header file
*/

/*
    Include
*/

#include "Arduino.h"

/*
    Struct Definitions
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

/* Buttons */
    HWIO Button = {2, {"APEnbl", "APSlct"}, {4, 5} , { 'p', 'o'}};
/* Knobs */
    HWIO Knob = {2, {"HDGEnbl", "HDGSlct"}, {6, 7}, {'h', 'j'}};
/* Toggles */
    HWIO Toggle = {2, {"Flaps", "LandingGear"}, {8, 9}, {'f', 'd'}};
