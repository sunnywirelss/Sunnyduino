void setup(){
  Serial2.begin(115200);
  delay(6000);
  Serial2.print("AT+CWMODE=1\r\n");
  delay(3000);
  Serial2.print("AT+CWJAP=\"hiwifi819\",\"18146507425\"\r\n");
  delay(11000);
  Serial2.print("AT+CIPSTART=\"TCP\",\"192.168.199.243\",8000\r\n");
  delay(3000);
  Serial2.print("AT+CIPMODE=1\r\n");
  delay(3000);
  Serial2.print("AT+CIPSEND\r\n");
  delay(3000);
}

void loop(){
  Serial2.print("Arduino Wifi Test\r\n");
  delay(3000);

}
