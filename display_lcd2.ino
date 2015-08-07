#include <LiquidCrystal.h>
                //RS,E,D4,D5,D6,D7
LiquidCrystal lcd(12,11,5,4,3,2);

void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
//lcd.print("Selva, Brasil!!");
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.clear();
  lcd.print("Oi! ");
  delay(2000);

  lcd.setCursor(0,1);
  lcd.print("tudo bem!");
  delay(2000);

  lcd.clear();
  lcd.print("tudo bem!");
  delay(2000);
  lcd.setCursor(0,1);
  lcd.print("gostou do");
  lcd.setCursor(0,1);
  lcd.print("projeto?");

  delay(4000);

   lcd.clear();
  lcd.print("Util, nao?");
  delay(1000);

  for(int i = 0; i < 12 ; i++){
    lcd.scrollDisplayLeft();
    delay(600);
    }
    delay(1000);
  
}
