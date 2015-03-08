void oneCloseOpen() {
  servoOne.write(180);
  delay(1000);
  servoOne.write(0);
  delay(1000);
  servoOne.write(90);
  delay(1000);
}
int servoAngleOne = 0;
void oneOpen() {
 // if (servoAngleOne <= 0) { 
 //   servoOne.write(90);
 //}    else {
    servoOne.write(180);
    delay(100);
 //   servoAngleOne = servoAngleOne - 50;
 // }
 Serial.println("Open");
}

void oneClose() {
  //if (servoAngleOne>= 180) {
    servoOne.write(90);
    delay(1000);
  //} else {
  //  servoOne.write(0);
  //  servoAngleOne = servoAngleOne + 50;
 // }
  Serial.println("Close");
}

