#include <AFMotor.h>

#include <Servo.h>            // Add library


Servo name_servo;               // Define any servo name

int servo_position = 0 ;

void setup() {
  
name_servo.attach (10);          // Define the servo signal pins

}

void loop() {
 for (servo_position = 0; servo_position <=180; servo_position +=1){

    name_servo.write(servo_position);
    delay(10);
  }

  for (servo_position=180; servo_position >= 0; servo_position -=1){

    name_servo.write(servo_position);
    delay(10);
  }
}
