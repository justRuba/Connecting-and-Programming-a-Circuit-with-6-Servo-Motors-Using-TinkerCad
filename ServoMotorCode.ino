#include <Servo.h>

Servo servoA, servoB, servoC, servoD, servoE, servoF;

void setup() {
  servoA.attach(13);
  servoB.attach(12);
  servoC.attach(11);
  servoD.attach(10);
  servoE.attach(8);
  servoF.attach(7);
}

void loop() {

  for (int pos = 0; pos <= 90; pos += 1) {
    servoA.write(pos);
    servoB.write(pos);
    servoC.write(pos);
    servoD.write(pos);
    servoE.write(pos);
    servoF.write(pos);
    delay(15);
  }

  for (int pos = 90; pos >= 0; pos -= 1) {
    servoA.write(pos);
    servoB.write(pos);
    servoC.write(pos);
    servoD.write(pos);
    servoE.write(pos);
    servoF.write(pos);
    delay(15);
  }

  delay(2000); // Delay before repeating
}