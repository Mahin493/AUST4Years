int lm35=A3;
int value =0;
void setup() {
  Serial.begin(9600);
}

void loop() {
  value=analogRead(lm35);
  float milivolts=(value/1024.0)*5000;
  float cel=milivolts/10;

  Serial.print("Temperature: ");
  Serial.print(cel);
  Serial.print("*C");
  Serial.println();
  delay(500);

  float farh=cel*(9/5)+32;
  Serial.print("Temperature: ");
  Serial.print(farh);
  Serial.print("*F");
  Serial.println();
  delay(500);

  
  
  
}
