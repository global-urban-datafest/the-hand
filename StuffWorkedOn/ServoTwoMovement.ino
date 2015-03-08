/*
void treCloseOpen() {
  servoTre.write(180);
  delay(1000);
  servoTre.write(0);
  delay(1000);
  servoTre.write(90);
  delay(1000);
}
*/
void treOpen() {
    servoTre.write(180);
}

void treClose() {
    servoTre.write(0); 
}
