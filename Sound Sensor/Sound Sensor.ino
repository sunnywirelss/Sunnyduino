void setup(){
  for (int i = 31; i <= 38; i = i + (1)) {
    pinMode(i, OUTPUT);
    digitalWrite(i,HIGH);
  }
}

void loop(){
  if (analogRead(A3) > 300) {
      for (int j = 31; j <= 38; j = j + 1) {
        pinMode(j, OUTPUT);
        digitalWrite(j,LOW);
      }
      delay(3000);

  } else {
      for (int j = 31; j <= 38; j = j + 1) {
        pinMode(j, OUTPUT);
        digitalWrite(j,HIGH);
      }

  }

}
