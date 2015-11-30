
void setup() {
  
Serial.begin(9600);
}

void loop() {
  
if(Serial.available()>0){
    int valor = Serial.read();
    if(valor == 'a'){
      Serial.println("a pressed");
      }else if( valor == 'b'){
        Serial.println("b pressed");
        }
  }

  delay(1000);
}
