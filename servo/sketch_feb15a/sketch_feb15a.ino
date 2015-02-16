#include <Servo.h>

Servo servo;

void setup() {
  // put your setup code here, to run once:
  servo.attach(2, 1000, 2000);
  servo.write(0);
}

void loop() {
  // put your main code here, to run repeatedly:
  servo.write(90);
  delay(1000);
  servo.write(180);
  delay(1000);
  servo.write(30);
  delay(1000);
}
