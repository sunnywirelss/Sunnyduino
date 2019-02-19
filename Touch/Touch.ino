void setup(){
  pinMode(29, INPUT);
  pinMode(3, OUTPUT);
}

void loop(){
  if (digitalRead(29) == 1) {
        tone(3,659);
        delay(600);
        tone(3,532);
        delay(600);
        noTone(3);

  }

}
