#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
char auth[] = "8YKvm4CG2sdfsdfsfxsfdf-sdfsdf";
char ssid[] = "Muhammed";
char pass[] = "12345678";
void setup()
{
  // Debug console
  Serial.begin(9600);
  //Blynk.begin(auth, ssid, pass);
  // You can also specify server:
  Blynk.begin(auth, ssid, pass, "blynk-cloud.com", 80);
  //Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8080);
}

void loop()
{
  Blynk.run();
}
