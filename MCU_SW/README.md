# BolleteWing Switch Panel

BolleteWing is a project aimed at designing a switch panel for use in popular flight simulation games, specifically "Microsoft Flight Simulator" and "Digital Combat Simulator" (DCS). The switch panel is intended to enhance the gaming experience by providing a physical interface for controlling various in-game functions.

This project implements a simple keyboard controller using an Arduino board. The main functionality revolves around a scheduler, which is defined in the `main.cpp` file. Additionally, calibration parameters and pin configurations are stored in the `calibrations.h` file, and the overall project structure is orchestrated by the `main.h` header file.

## Files

### `main.cpp`

This file contains the main logic for the keyboard controller. The `setup()` function initializes Serial communication and sets up pin modes using the `Initialize_PinModes()` function. The main loop (`loop()`) continuously calls `ReadInputs_SendOutputs()`, which reads input states and sends corresponding keyboard commands.

### `calibrations.h`

This header file holds calibration parameters for the project. It includes necessary declarations, defines a structure (`HWIO`) for hardware input/output configurations, and provides specific configurations for buttons, knobs, toggles, and the power switch.

### `main.h`

The scheduler header file includes essential declarations and imports necessary libraries (`Arduino.h`, `HID.h`, and `Keyboard.h`). It declares external instances of the `HWIO` structure for buttons, knobs, and toggles. Function prototypes for the scheduler functions are also declared in this file.

### `platformio.ini`

The PlatformIO project configuration file specifies build options, upload settings, library dependencies, and other project-specific configurations. It uses the `32u416m` board from the `atmelavr` platform and includes the necessary library (`Keyboard@^1.0.5`).

## Project Structure

- **Hardware Input/Output Configuration (`calibrations.h`):**
  - Defines a structure (`HWIO`) for hardware input/output configurations.
  - Specifies configurations for buttons, knobs, toggles, and the power switch.

- **Scheduler (`main.cpp` and `main.h`):**
  - Implements the main scheduler logic for reading inputs and sending keyboard outputs.
  - Initializes pin modes and manages the overall flow of the program.

- **PlatformIO Configuration (`platformio.ini`):**
  - Contains build options, upload settings, and library dependencies.
  - Specifies the target board and associated parameters.

## Setup and Usage

1. **Connect Hardware:**
   - Connect input devices (buttons, knobs, toggles) to the specified pins as configured in `calibrations.h`.
   - Connect the power switch to the designated pin (`powerpin`).

2. **Upload Code:**
   - Use PlatformIO or the Arduino IDE to upload the code to the target Arduino board.

3. **Configure Calibration (Optional):**
   - Adjust configurations in `calibrations.h` based on your specific hardware setup and requirements.

4. **Power On:**
   - Power on the device to activate the keyboard controller.

## Dependencies

- **Arduino Libraries:**
  - The project depends on the `Keyboard` library, version 1.0.5. Ensure that this library is installed in your development environment.

## Notes

- Make sure to review and modify pin configurations, keyboard mappings, and calibration parameters according to your hardware specifications.

- Refer to the provided links for additional documentation on [PlatformIO Project Configuration](https://docs.platformio.org/page/projectconf.html) and [Arduino Keyboard Library](https://www.arduino.cc/reference/en/language/functions/usb/keyboard/).