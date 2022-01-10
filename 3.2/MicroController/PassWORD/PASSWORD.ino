#include<Keypad.h>
#include<LiquidCrystal.h>
#define len 5
LiquidCrystal lcd(8,9,10,11,12,13);
const byte rows=4;
const byte cols=4;
char keys[rows][cols]={
  {'7','8','9','A'},
  {'4','5','6','B'},
  {'1','2','3','C'},
  {'C','0','=','D'}
};
byte rowPins[rows]={0,1,2,3};
byte colPins[cols]={4,5,6,7};
char user[len];
char password[len]="1504";
byte count=0;
char key ;

Keypad customkeypad(makeKeymap(keys),rowPins,colPins,rows,cols);
void setup()
{
  lcd.begin(16,2);
  lcd.print("Initialzing..");
  delay(1000);
  lcd.clear();
}

void loop()
{
  lcd.setCursor(0,0);
  lcd.print(" Enter password");
  key= customkeypad.getKey();
  if(key){
    user[count]=key;
    lcd.setCursor(count,1);
    lcd.print(user[count]);
    count++;
  }
  if(count==len-1)
  {
    if(!strcmp(user,password))
    {
      lcd.clear();
      lcd.print(" Password Matched");
      delay(1000);
      count=0;
      
    }else{
      lcd.clear();
      lcd.print(" Wrong password");
      delay(1000);
      count=0;
    }
    
  }
  
}
