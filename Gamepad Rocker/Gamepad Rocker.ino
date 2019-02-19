void setup(){
  pinMode(39, INPUT);
  Serial.begin(9600);
}

void loop(){
  Serial.println(String("Z:") + String(digitalRead(39)));
  Serial.println(String("X:") + String(analogRead(A5)));
  Serial.println(String("Y:") + String(analogRead(A6)));
  delay(500);

}
