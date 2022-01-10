#include <Keypad.h> 
  const byte ROWS = 4; 
  const byte COLS = 4; 
  // Define the Keymap
  char keys[ROWS][COLS] = {
  {'7','8','9','/'},
  {'4','5','6','*'},
  {'1','2','3','-'},
  {'c','0','=','+'}
  };
  byte rowPins[ROWS] = { 2, 3, 4, 5 };   
  byte colPins[COLS] = { 6, 7, 8, 9 };  
  
  Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS ); 
void setup() {
  Serial.begin(9600);
}

void loop() {
  char key = keypad.getKey();
  if(key){
    Serial.println(key);
  }
}
