int bright=0;

void setup(){
  pinMode(10,OUTPUT);
}

void loop(){
    
    bright = (map(analogRead(A2), 0, 1023, 0, 255));   
    analogWrite(10,bright);

}
