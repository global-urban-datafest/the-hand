#include <Servo.h>

int onePos = 90;

Servo servoOne;
Servo servoTwo;
Servo servoTre;

const int buttonOnePin = 10;
const int buttonTwoPin = 9;
const int buttonTrePin = 11;
const int ledPin = 13; 

int buttonStateOne = 0;
int buttonStateTwo = 0;
int buttonStateTre = 0;

void setup() {
  servoOne.attach(3);
//  servoTwo.attach(5);
//  servoTre.attach(6);


  setAllServo();
  pinMode(buttonOnePin, INPUT);
  pinMode(buttonTwoPin, INPUT);
  pinMode(buttonTrePin, INPUT);
}

void loop() {
  buttonStateOne = digitalRead(buttonOnePin);
  buttonStateTwo = digitalRead(buttonTwoPin);
  buttonStateTre = digitalRead(buttonTrePin);

  if (buttonStateOne == LOW) {
    oneOpen();

  } else if (buttonStateOne == HIGH) {
    oneClose();   
  }
  if (buttonStateTwo == HIGH) {
    twoOpen();

  } else if (buttonStateTwo == LOW) {
    twoClose();   
  }
  if (buttonStateTre == HIGH) {
    treOpen();

  } else if (buttonStateTre == LOW) {
    treClose();   
  }
  /*
  servoOne.write(180);
   delay(635);
   servoOne.write(90);
   delay(1000);
   servoOne.write(0);
   delay(660);
   servoOne.write(90);
   delay(1000);
   
   servoTwo.write(180);
   delay(1000);
   servoTwo.write(0);
   delay(660);
   
   servoTre.write(180);
   delay(635);
   servoTre.write(90);
   delay(1000);
   servoTre.write(0);
   delay(660);
   servoTre.write(90);
   delay(1000);
   */
  //  oneCloseOpen();
  //  twoCloseOpen();
  //  treCloseOpen();

}

void setAllServo() {
  servoOne.write(180);
  servoOne.write(90);
  servoTwo.write(1);
  servoTwo.write(0);
  servoTre.write(0);
  servoTre.write(90);
}




