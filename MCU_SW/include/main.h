#include <Arduino.h>
#include "HID.h"
#include "Keyboard.h"
#include "calibrations.h"

extern struct HWIO Button;
extern struct HWIO Knob;
extern struct HWIO Toggle;

void ReadInputs(void);
void InitializePinModes(void);