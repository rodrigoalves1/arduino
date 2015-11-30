int ldr = A0;
int led = 7;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int luz = analogRead(ldr);

if(luz <500){
  digitalWrite(led,HIGH);
  }
  else{
    digitalWrite(led,LOW);
    }
delay(1000);
Serial.print("luz = ");
Serial.println(luz);
}
