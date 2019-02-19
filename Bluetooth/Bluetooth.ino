String item="";

void serialEvent3() {
  item = Serial3.readString();
  if (String(item).equals(String("on"))) {
    digitalWrite(5,LOW);

  }
  if (String(item).equals(String("off"))) {
    digitalWrite(5,HIGH);

  }
}

void setup(){
  Serial3.begin(9600);
  pinMode(5, OUTPUT);
  digitalWrite(5,HIGH);
  
}

void loop(){

}
