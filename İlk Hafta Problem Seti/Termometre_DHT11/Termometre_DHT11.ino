//Muhammed ÇİÇEK tarafından Hazırlanılmıştır
//DHT11 sıcaklık ve nem ölçme projesi

#include <dht.h>
dht DHT;
#define DHT11_PIN 7

void setup(){
  Serial.begin(9600);
}

void loop(){
  int deger = DHT.read11(DHT11_PIN);
  Serial.print("Temperature = ");
  Serial.println(DHT.temperature);
  Serial.print("Humidity = ");
  Serial.println(DHT.humidity);
  delay(1000);
  
  //Fahrenayta çevirme yapalım
   float Fahrenayt = ((DHT.temperature)*9.0/5.0)+32.0;
    Serial.print("Fahrenayt =");
    Serial.println(Fahrenayt);
  delay(1000);
}
