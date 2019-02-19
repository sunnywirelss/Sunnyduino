void setup(){
  for (int i = 31; i <= 38; i = i + (1)) {
    pinMode(i, OUTPUT);
    digitalWrite(i,HIGH);
  }
}

void loop(){
  for (int i = 31; i <= 38; i = i + (1)) {
    pinMode(i, OUTPUT);
    digitalWrite(i,LOW);
    delay(500);
  }

}
