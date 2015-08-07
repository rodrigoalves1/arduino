#include <LiquidCrystal.h>
                //RS,E,D4,D5,D6,D7
LiquidCrystal lcd(12,11,5,4,3,2);

void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
lcd.print("Selva, Brasil!!");
}

void loop() {
  // put your main code here, to run repeatedly:
lcd.noDisplay();
delay(500);
lcd.display();
delay(500);
}
