#include <AFMotor.h>

#include <Servo.h>

Servo servoLeft;          // Define left servo
Servo servoRight;         // Define right servo

void setup() { 
  servoLeft.attach(10);  // Set left servo to digital pin 10
  servoRight.attach(9);  // Set right servo to digital pin 9
} 

void loop() {            // Loop through motion tests
  
  turnRight();
  delay(2000);
  turnLeft();
  delay(2000);
  
}

// Motion routines for forward, reverse, turns, and stop

void turnRight() {
  servoLeft.write(180);
  servoRight.write(180);
}
void turnLeft() {
  servoLeft.write(0);
  servoRight.write(0);
}


