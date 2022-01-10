void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT); // init LED pin

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13,HIGH); // light on
  delay(500);
  digitalWrite(13,LOW); // light off
  delay(500);
  
}
