void setup(){
  pinMode(10, OUTPUT);
}

void loop(){
  for (int i = 0; i <= 255; i = i + (5)) {
    analogWrite(10,i);
    delay(50);
  }

}
