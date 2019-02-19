void setup() {
  pinMode(11,INPUT);
  pinMode(5,INPUT);
  pinMode(6,INPUT);
  pinMode(7,INPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println(digitalRead(11));
  if(digitalRead(11)==1){
    digitalWrite(5,LOW);   
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
  }else{
    digitalWrite(5,HIGH);   
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    
 }

}
