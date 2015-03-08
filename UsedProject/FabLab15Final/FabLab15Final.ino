#include <Servo.h>

Servo servoOne;
Servo servoTwo;


void setup() {
  // put your setup code here, to run once:
  servoOne.attach(9);
  servoTwo.attach(3);
  
}

void loop() {
  // put your main code here, to run repeatedly: 
  servoOne.write(180);
  servoTwo.write(180);
  delay(1000);
  servoOne.write(90);
  servoTwo.write(0);
  delay(1000);
  servoOne.write(0);
  servoTwo.write(90);
  delay(1000);
  servoOne.write(90);
  servoTwo.write(90);
  delay(1000);
}
