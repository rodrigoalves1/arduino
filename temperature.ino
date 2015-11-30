const int REFRESH_RATE = 500;

const float CELSIUS_BASE = 0.4887585532746823069403714565;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.print("Temperatura = ");
Serial.println(readTemperature());
delay(REFRESH_RATE);
}

float readTemperature(){
  return (analogRead(A0)*CELSIUS_BASE);
  }
