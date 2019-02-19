void setup() {
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(40,OUTPUT);
  pinMode(41,OUTPUT);
}

void loop() {
  digitalWrite(40,HIGH);
  analogWrite(13,100);
  digitalWrite(41,HIGH);
  analogWrite(12,100);

}
