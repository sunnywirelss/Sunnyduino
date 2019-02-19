#include <dht11.h>

dht11 DHT11;

#define DHT11PIN 42

void setup()
{
  Serial.begin(9600);
 
}

void loop()
{
  Serial.println("\n");
  int chk = DHT11.read(DHT11PIN);
  
  Serial.print("Humidity (%): ");
  Serial.println((float)DHT11.humidity, 2);

  Serial.print("Temperature (oC): ");
  Serial.println((float)DHT11.temperature, 2);

  

  delay(2000);
}
