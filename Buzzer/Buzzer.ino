float tonelist[7]={1046.5,1174.7,1318.5,1396.9,1568,1760,1975.5};

void setup(){
  pinMode(3, OUTPUT);
}

void loop(){
  for (int i = 0; i <= 6; i = i + 1) {
    tone(3,tonelist[i]);
    delay(300);
    noTone(3);
    delay(300);
  }

}
