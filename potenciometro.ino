int pot = A0;
int valPot = 0;
int led = 9;
void setup() {
  Serial.begin(9600);
  pinMode(pot,INPUT);
  pinMode(led,OUTPUT);
}

void loop() {

valPot = analogRead(pot);
int valFim = 0;

valFim = map(valPot,0,1023,0,255);
Serial.print("Valor potenciometro = ");
Serial.println(valFim);

analogWrite(led,valFim);
}
