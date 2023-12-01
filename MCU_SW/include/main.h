#include <Arduino.h>
#include "HID.h"
#include "Keyboard.h"
#include "calibrations.h"

extern struct HWIO Button;
extern struct HWIO Knob;
extern struct HWIO Toggle;

void ReadInputs_SendOutputs(void);
void Initialize_PinModes(void);
bool Dtrmn_b_KeyboardActive(void);