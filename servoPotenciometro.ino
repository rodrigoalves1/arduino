#include <Servo.h>

Servo servo;
int servoPin = 2;
void setup() {
  pinMode(A0,INPUT);
servo.attach(servoPin);
servo.write(0);
}

void loop() {
int valPot = analogRead(A0);
int valFim = map(valPot,0,1023,0,180);

servo.write(valFim);
}
