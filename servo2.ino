#include <AFMotor.h>

#include <Servo.h>            // Add library

// Define any servo name
Servo name_servo;
Servo name_servo2;

int servo_position = 0 ;

void setup() {
  
name_servo.attach (10);          // Define the servo signal pins
name_servo2.attach (9); 

}

void loop() {

//servo 1

 for (servo_position = 0; servo_position <=180; servo_position +=1){
    name_servo.write(servo_position);
    delay(10);
  }

  for (servo_position=180; servo_position >= 0; servo_position -=1){

    name_servo.write(servo_position);
    delay(10);
  }
//servo 2

  
  for (servo_position = 0; servo_position <=180; servo_position +=1){

    name_servo2.write(servo_position);
    delay(10);
  }

  for (servo_position=180; servo_position >= 0; servo_position -=1){

    name_servo2.write(servo_position);
    delay(10);
  }
  
}
