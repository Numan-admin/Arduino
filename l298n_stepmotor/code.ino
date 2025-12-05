// Include the Arduino Stepper Library
#include <Stepper.h>

// Define the number of steps per rotation
const int stepsPerRevolution = 200;

// Create Instance of Stepper library
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);

void setup() {
  // Nothing to do (Stepper Library sets pins as outputs)
}

void loop() {
  // Rotate CW slowly at 50 RPM
  myStepper.setSpeed(50);
  myStepper.step(stepsPerRevolution);
  delay(1000);

  // Rotate CCW quickly at 100 RPM
  myStepper.setSpeed(100);
  myStepper.step(-stepsPerRevolution);
  delay(1000);
}

//https://lastminuteengineers.com/stepper-motor-l298n-arduino-tutorial/   destek alınmıştır.