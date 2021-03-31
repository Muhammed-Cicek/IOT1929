#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>

Servo servo;
char auth[] = "8YKvm4CGsfdasdfasdfjkfJN";
char ssid[] = "Muhammed";
char pass[] = "12345678";
void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass, "blynk-cloud.com", 80);
 servo.attach(4);
}
void loop()
{
  Blynk.run();
}
BLYNK_WRITE(V0){
  servo.write(param.asInt());
  }
