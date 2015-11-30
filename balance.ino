int tilt = 2;
void setup() {
  
pinMode(tilt,INPUT);
Serial.begin(9600);
}

void loop() {
  
int valor =digitalRead(tilt);
Serial.println(valor);
}
