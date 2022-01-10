#include <Servo.h>
#include <Wire.h>
#include <LiquidCrystal.h>
#include <Keypad.h>

#define pass_len 5

char store[pass_len];
char ex_store[pass_len];
char old[pass_len] = "1234"; //foward pass
char ex_old[pass_len] = "4321"; //backward pass
byte data_count = 0;
byte dc = 0;
char ex_customKey, customKey;

const int buzzer = 19;
int entry_light = 15;
int pir_entry = 14;
int pir_entry_status = 0;
int entry_green = 16;
int entry_red = 17;

Servo gate;
int gate_pin = 18;
int pos = 0;

long dur_1,dur_2,dur_3,dur_4,dur_5,dur_6;
int dis_1,dis_2,dis_3,dis_4,dis_5,dis_6;

int park_green_1 = 22;
int park_red_1 = 23;
const int echo_1 = 24;
const int trigger_1 = 25;

int park_green_2 = 26;
int park_red_2 = 27;
const int echo_2 = 28;
const int trigger_2 = 29;

int park_green_3 = 30;
int park_red_3 = 31;
const int echo_3 = 32;
const int trigger_3 = 33;

int park_green_4 = 34;
int park_red_4 = 35;
const int echo_4 = 36;
const int trigger_4 = 37;

int park_green_5 = 38;
int park_red_5 = 39;
const int echo_5 = 40;
const int trigger_5 = 41;

int park_green_6 = 42;
int park_red_6 = 43;
const int echo_6 = 44;
const int trigger_6 = 45;

int ldr = A3; 
int val = 0; 

int room_light = 53;

LiquidCrystal lcd(13, 4, 3, 2, 1, 0);

const byte ROWS = 4;

const byte COLS = 4;

char key_pad[ROWS][COLS] = {

  {'7', '8', '9', 'A'},

  {'4', '5', '6', 'B'},

  {'1', '2', '3', 'C'},

  {'*', '0', '#', 'D'}

};

bool ck = true;

byte rowPins[ROWS] = {8, 7, 6, 5};

byte colPins[COLS] = {12, 11, 10, 9};

int track = 2 ; // garage capacity
char myTrack[10];



Keypad customKeypad = Keypad( makeKeymap(key_pad), rowPins, colPins, ROWS, COLS);



void setup() {
  Wire.begin();
  lcd.begin(16, 2);

  lcd.print("..Smart Garage..");

  lcd.setCursor(2, 1);

  pinMode(buzzer, OUTPUT);

  sprintf(myTrack, "%d", track);
  lcd.print(myTrack);

  lcd.print(myTrack);
  lcd.setCursor(3, 1);
  lcd.print(" left");

  delay(500);

  lcd.clear();
  pinMode(pir_entry, INPUT);
  pinMode(entry_light, OUTPUT);
  pinMode(entry_green, OUTPUT);
  pinMode(entry_red, OUTPUT);

  gate.attach(gate_pin);

  pinMode(trigger_1, OUTPUT);
  pinMode(trigger_1, INPUT);
  pinMode(park_green_1, OUTPUT);
  pinMode(park_red_1, OUTPUT);
  
  pinMode(trigger_2, OUTPUT);
  pinMode(trigger_2, INPUT);
  pinMode(park_green_2, OUTPUT);
  pinMode(park_red_2, OUTPUT);

  pinMode(trigger_3, OUTPUT);
  pinMode(trigger_3, INPUT);
  pinMode(park_green_3, OUTPUT);
  pinMode(park_red_3, OUTPUT);

  pinMode(trigger_4, OUTPUT);
  pinMode(trigger_4, INPUT);
  pinMode(park_green_4, OUTPUT);
  pinMode(park_red_4, OUTPUT);

  pinMode(trigger_5, OUTPUT);
  pinMode(trigger_5, INPUT);
  pinMode(park_green_5, OUTPUT);
  pinMode(park_red_5, OUTPUT);

  pinMode(trigger_6, OUTPUT);
  pinMode(trigger_6, INPUT);
  pinMode(park_green_6, OUTPUT);
  pinMode(park_red_6, OUTPUT);

  pinMode(room_light, OUTPUT);
  
}

void loop()
{
  PIR_sensor();
  LDR();
  if (ck == 0)
  {
    customKey = customKeypad.getKey();
    if (customKey == '*')
    {
      lcd.clear();
      ck = 1;
    }
    if (customKey == '#')
    {
      lcd.clear();
      Open();
    }
  }
  else
  {
    password();
  }
  Parking();
}
//Parking//
void Parking()
{
  digitalWrite(trigger_1, LOW);
  delay(2);
  digitalWrite(trigger_1, HIGH);
  delay(10);
  digitalWrite(trigger_1, LOW);

  dur_1 = pulseIn(echo_1, HIGH);

  dis_1 = (dur_1*0.034)/2;

  if(dis_1 > 200)
  {
    digitalWrite(park_green_1, HIGH);
    digitalWrite(park_red_1, LOW);
  }
  else if(dis_1 <= 200){
    digitalWrite(park_red_1, HIGH);
    digitalWrite(park_green_1, LOW);
  }
  
  digitalWrite(trigger_2, LOW);
  delay(2);
  digitalWrite(trigger_2, HIGH);
  delay(10);
  digitalWrite(trigger_2, LOW);

  dur_2 = pulseIn(echo_2, HIGH);

  dis_2 = (dur_2*0.034)/2;

  if(dis_2 > 200)
  {
    digitalWrite(park_green_2, HIGH);
    digitalWrite(park_red_2, LOW);
  }
  else if(dis_2 <= 200){
    digitalWrite(park_red_2, HIGH);
    digitalWrite(park_green_2, LOW);
  }
  
  digitalWrite(trigger_3, LOW);
  delay(2);
  digitalWrite(trigger_3, HIGH);
  delay(10);
  digitalWrite(trigger_3, LOW);

  dur_3 = pulseIn(echo_3, HIGH);

  dis_3 = (dur_3*0.034)/2;

  if(dis_3 > 200)
  {
    digitalWrite(park_green_3, HIGH);
    digitalWrite(park_red_3, LOW);
  }
  else if(dis_3 <= 200){
    digitalWrite(park_red_3, HIGH);
    digitalWrite(park_green_3, LOW);
  }

  digitalWrite(trigger_4, LOW);
  delay(2);
  digitalWrite(trigger_4, HIGH);
  delay(10);
  digitalWrite(trigger_4, LOW);

  dur_4 = pulseIn(echo_4, HIGH);

  dis_4 = (dur_4*0.034)/2;

  if(dis_4 > 200)
  {
    digitalWrite(park_green_4, HIGH);
    digitalWrite(park_red_4, LOW);
  }
  if(dis_4 <= 200){
    digitalWrite(park_red_4, HIGH);
    digitalWrite(park_green_4, LOW);
  }

  digitalWrite(trigger_5, LOW);
  delay(2);
  digitalWrite(trigger_5, HIGH);
  delay(10);
  digitalWrite(trigger_5, LOW);

  dur_5 = pulseIn(echo_5, HIGH);

  dis_5 = (dur_5*0.034)/2;

  if(dis_5 > 200)
  {
    digitalWrite(park_green_5, HIGH);
    digitalWrite(park_red_5, LOW);
  }
  if(dis_5 <= 200){
    digitalWrite(park_red_5, HIGH);
    digitalWrite(park_green_5, LOW);
  }

  digitalWrite(trigger_6, LOW);
  delay(2);
  digitalWrite(trigger_6, HIGH);
  delay(10);
  digitalWrite(trigger_6, LOW);

  dur_6 = pulseIn(echo_6, HIGH);

  dis_6 = (dur_6*0.034)/2;

  if(dis_6 > 200)
  {
    digitalWrite(park_green_6, HIGH);
    digitalWrite(park_red_6, LOW);
  }
  if(dis_6 <= 200){
    digitalWrite(park_red_6, HIGH);
    digitalWrite(park_green_6, LOW);
  }
}

void password()
{
  if (track >= 0)
  {
    Open();
  }
  else
  {
    lcd.setCursor(2, 1);
    lcd.print("No Park left");
    delay(500);
    lcd.clear();
    ck = 0;
  }
}

void clearData()
{
  while (data_count != 0)
  {
    store[data_count--] = 0;
  }
  return;
}

void Entry_signal()
{
  if (track > 0)
  {
    digitalWrite(entry_green, HIGH);
    digitalWrite(entry_red, LOW);
  } else if (track == 0)
  {
    digitalWrite(entry_red, HIGH);
    digitalWrite(entry_green, LOW);
  }
}

void PIR_sensor()
{
  pir_entry_status = digitalRead(pir_entry);
  if (pir_entry_status == HIGH)
  {
    digitalWrite(entry_light, HIGH);
  }
  else {
    digitalWrite(entry_light, LOW);
  }
}
void Buzzer()
{
  tone(buzzer, HIGH); // for different sound
  delay(300);
  noTone(buzzer); // no sound
  delay(500);
}

void LDR()
{
  val = analogRead(ldr);
  if(val <= 200)
  {
    digitalWrite(room_light,HIGH);
  }else
  {
    digitalWrite(room_light,LOW);
  }
}
void servo_gate_open()
{
  gate.attach(gate_pin);
  delay(1);
  gate.write(0);
  delay(1000);
  gate.write(92);
  delay(300);
  gate.detach();
}

void Open()
{
  Entry_signal();
  lcd.setCursor(0, 0);
  lcd.print("Enter Password");

  customKey = customKeypad.getKey();

  if (customKey)
  {
    store[data_count] = customKey;
    lcd.setCursor(data_count, 1);
    lcd.print(store[data_count]);
    data_count++;
  }

  if (data_count == pass_len - 1)
  {
    if (!strcmp(store, old))
    {
      lcd.clear();
      lcd.print("...Welcome...");
      delay(500);
      ck = 0;
      track--;
      lcd.clear();

      servo_gate_open();

      lcd.setCursor(7, 1);
      sprintf(myTrack, "%d", track);
      lcd.print(myTrack);
      lcd.print(" left");

      delay(500);
      lcd.clear();
      
    }
    else if (!strcmp(store, ex_old))
    {
      lcd.clear();
      lcd.print("..Thank You..");
      delay(500);
      ck = 0;
      track++;
      lcd.clear();

      servo_gate_open();

      lcd.setCursor(7, 1);
      sprintf(myTrack, "%d", track);
      lcd.print(myTrack);
      lcd.print(" left");



      delay(500);
      lcd.clear();
    }
    else
    {
      Buzzer();
      lcd.clear();
      lcd.print(" Wrong Password ");
      delay(500);
      ck = 1;
      lcd.clear();
    }
    clearData();
  }
}
