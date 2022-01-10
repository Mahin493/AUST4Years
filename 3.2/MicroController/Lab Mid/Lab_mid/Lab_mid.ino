#include <LiquidCrystal.h>

int ldr = A0;
int val = 0;

LiquidCrystal lcd(13,12,11,10,9,8);

  int frmotorF = 0;
  int frmotorR = 1;

  int flmotorF = 2;
  int flmotorR = 3;

  int brmotorF = 4;
  int brmotorR = 5;

  int blmotorF = 6;
  int blmotorR = 7;

void setup(){

    lcd.begin(16,2);

  lcd.print("..MSD LAB QUIZ..");

  lcd.setCursor(2,1);

  lcd.print("17.02.04.025");

  delay(2000);

  lcd.clear();

  pinMode(frmotorF,OUTPUT); 
  pinMode(frmotorR,OUTPUT);

  pinMode(flmotorF,OUTPUT); 
  pinMode(flmotorR,OUTPUT);

  pinMode(brmotorF,OUTPUT); 
  pinMode(brmotorR,OUTPUT);

  pinMode(blmotorF,OUTPUT); 
  pinMode(blmotorR,OUTPUT);
}
void loop()
{
  val = analogRead(ldr);

  if(val >= 100 && val <=300)
  {
    lcd.clear();
    lcd.print("Forward");
    
    lcd.setCursor(0,1);
    lcd.print(val);
    delay(1000);
    
    digitalWrite(frmotorF, HIGH);
    digitalWrite(frmotorR, LOW);
    digitalWrite(flmotorF, HIGH);
    digitalWrite(flmotorR, LOW);
    digitalWrite(brmotorF, HIGH);
    digitalWrite(brmotorR, LOW);
    digitalWrite(blmotorF, HIGH);
    digitalWrite(blmotorR, LOW);
  }
  if(val >= 301 && val <=500)
  {
    lcd.clear();
    lcd.print("Backward");
    
    lcd.setCursor(0,1);
    lcd.print(val);
    delay(1000);
    
    digitalWrite(frmotorR, HIGH);
    digitalWrite(frmotorF, LOW);
    digitalWrite(flmotorR, HIGH);
    digitalWrite(flmotorF, LOW);
    digitalWrite(brmotorR, HIGH);
    digitalWrite(brmotorF, LOW);
    digitalWrite(blmotorR, HIGH);
    digitalWrite(blmotorF, LOW);
  }
  if(val >= 501 && val <=700)
  {
    lcd.clear();
    lcd.print("Right");
    
    lcd.setCursor(0,1);
    lcd.print(val);
    delay(1000);
    
    digitalWrite(frmotorF, HIGH);
    digitalWrite(frmotorR, LOW);
    digitalWrite(flmotorF, HIGH);
    digitalWrite(flmotorR, LOW);
    digitalWrite(brmotorR, HIGH);
    digitalWrite(brmotorF, LOW);
    digitalWrite(blmotorF, HIGH);
    digitalWrite(blmotorR, LOW);
  }
    if(val >=700)
  {
    lcd.clear();
    lcd.print("Left");
    
    lcd.setCursor(0,1);
    lcd.print(val);
    delay(1000);
    
    digitalWrite(frmotorF, HIGH);
    digitalWrite(frmotorR, LOW);
    digitalWrite(flmotorF, HIGH);
    digitalWrite(flmotorR, LOW);
    digitalWrite(brmotorF, HIGH);
    digitalWrite(brmotorR, LOW);
    digitalWrite(blmotorR, HIGH);
    digitalWrite(blmotorF, LOW);
  }
  if(val < 100)
  {
    lcd.clear();
    lcd.print("Stop");
    
    lcd.setCursor(0,1);
    lcd.print(val);
    delay(1000);
    
    digitalWrite(frmotorF, LOW);
    digitalWrite(frmotorR, LOW);
    digitalWrite(flmotorF, LOW);
    digitalWrite(flmotorR, LOW);
    digitalWrite(brmotorF, LOW);
    digitalWrite(brmotorR, LOW);
    digitalWrite(blmotorF, LOW);
    digitalWrite(blmotorR, LOW);
  }
}
