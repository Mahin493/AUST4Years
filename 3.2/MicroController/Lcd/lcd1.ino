#include<LiquidCrystal.h>

LiquidCrystal lcd(13,12,11,10,9,8);

LiquidCrystal lcd2(13,12,11,10,9,8);

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  lcd.print("Mahin Evan Arnob");
  delay(1000);
 // lcd.clear();

}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(0,1);
  lcd.print("Three Brothers");
  delay(1000);
  lcd.clear();

}
