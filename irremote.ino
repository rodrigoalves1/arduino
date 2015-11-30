#include <IRremote.h>
int ir_sensor = 8;
IRrecv ir(ir_sensor);
decode_results results;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
ir.enableIRIn();
}

void loop() {
  // put your main code here, to run repeatedly:
if(ir.decode(&results)){
  Serial.println(results.value);
  delay(500);
  ir.resume();
  }
}
