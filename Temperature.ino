#include<DHT.h>
DHT dht(2,DHT11);
void setup()
{
  Serial.begin(9600);
  dht.begin();
}
void loop()
{
  float h=dht.readHumidity();
  float t_c=dht.readTemperature();
  float t_f=dht.readTemperature(true);
  float t_k = t_c+273.15;
  Serial.print("Humidity: " + String(h) + " %");
  Serial.println("Temperature: " + String(t_c) + " C");
  Serial.println("Temperature: " + String(t_f) + " F");
  Serial.println("Temperature: " + String(t_k) + " K");
  delay(500);
}
