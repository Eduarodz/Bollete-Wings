#include <Arduino.h>


#include <Keyboard.h>
#include <Mouse.h>

/* Hardware Setup: */
const int left_knob_sensor = A0;
const int right_knob_sensor = A1; 

const int buttonPin1 = 2;
const int buttonPin2 = 3;
const int buttonPin3 = 4;
const int buttonPin4 = 5;
const int buttonPin5 = 6;

const int ledPin = 13; // integrated LED


/* States and Sensor Data */ 
int left_knob = 0;
int right_knob = 0;
int button1 = 0;
int button2 = 0;
int button3 = 0;
int button4 = 0;
int button5 = 0;

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);

  // initialize the pushbutton pin as an input:
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
  pinMode(buttonPin4, INPUT);
  pinMode(buttonPin5, INPUT);

  Serial.begin(9600); //TODO: Needed?leave:remove;

  Mouse.begin();
  Keyboard.begin();
}

void readButtons();
void readKnobs();

void loop() {
  readKnobs();
  readButtons();

  write_KbMap(button1, '1');
  write_KbMap(button2, '2');
  write_KbMap(button3, '3');
  write_KbMap(button4, '4');
  write_KbMap(button5, 'g');
}

void readButtons(){
  button1 = digitalRead(buttonPin1);
  button2 = digitalRead(buttonPin2);
  button3 = digitalRead(buttonPin3);
  button4 = digitalRead(buttonPin4);
  button5 = digitalRead(buttonPin5);
}

void readKnobs(){
  left_knob = analogRead(left_knob_sensor);
  right_knob = analogRead(right_knob_sensor);
}

void write_KbMap(int button, char keboard_letter){
    if (button == HIGH) {
      Keyboard.write('keboard_letter');
  }
}
