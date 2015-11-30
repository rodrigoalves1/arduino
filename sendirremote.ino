#include <IRremote.h>
unsigned int raw[] = {4450 ,4450 ,550 ,1700 ,550 ,1650 ,550 ,1650 ,550 ,600 ,500 ,600 ,550 ,550 ,550 ,550 ,550 ,550 ,550 ,1650 ,550 ,1700 ,550 ,1650 ,550 ,550 ,550 ,600 ,500 ,600 ,500 ,600 ,550 ,550 ,550 ,550 ,550 ,550 ,550 ,1700 ,500 ,600 ,500 ,600 ,550 ,550 ,550 ,550 ,550 ,600 ,500 ,1700 ,500 ,1700 ,550 ,550 ,550 ,1650 ,550 ,1650 ,550 ,1700 ,550 ,1650 ,550 ,1700 ,500};

IRsend irsend;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
irsend.sendRaw(raw,68,38);

delay(100);

}
