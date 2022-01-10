int buzzer=9;

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  tone(9,450);
  delay(500);
  noTone(buzzer);
  delay(500);

}
