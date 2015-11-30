#include <Servo.h>

Servo servo;
int servoPin = 2;

void setup() {
servo.attach(servoPin);
servo.write(0);
}

void loop() {
  servo.write(0);
  for(int i = 0; i <= 180; i=i+10){
servo.write(i);
delay(1000);
}
}
