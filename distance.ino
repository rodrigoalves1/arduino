int trigPin = 12;
int echoPin = 13;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(echoPin,INPUT);
pinMode(trigPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
long duration ;
long distance ;


digitalWrite(trigPin,LOW);
delayMicroseconds(2);
digitalWrite(trigPin,HIGH);
delayMicroseconds(10);
digitalWrite(trigPin,LOW);
duration = pulseIn(echoPin,HIGH);
distance = (duration/2) / 29.1;

/*if(distance >= 200 || distance <= 0){
  Serial.println("fora do alcance");
  }
  else
{*/
  Serial.print("distancia = ");
  Serial.print(distance);
  Serial.println(" cm");
//}
delay(500);
}
