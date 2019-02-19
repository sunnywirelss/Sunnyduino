void setup(){
  pinMode(22, INPUT);
  pinMode(10, OUTPUT);
}

void loop(){
  if (digitalRead(22) == 1) {
    digitalWrite(10,HIGH);
    delay(3000);
    digitalWrite(10,LOW);
  }
}
