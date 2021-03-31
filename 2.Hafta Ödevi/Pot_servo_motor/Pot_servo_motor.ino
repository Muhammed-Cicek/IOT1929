#include<Servo.h>
Servo muho1;
Servo muho2;
#define pot1 A0
#define pot2 A1
int pot1_degeri;
int pot2_degeri;

void setup() {
 Serial.begin(9600); 
muho1.attach(4);
muho2.attach(6);
}

void loop() {
 pot1_degeri=analogRead(pot1);
 pot2_degeri=analogRead(pot2);
int birinci_deger=map(pot1_degeri , 0, 1023, 0, 180);
int ikinci_deger=map(pot2_degeri , 0, 1023, 0, 90);
muho1.write(birinci_deger);
  Serial.print("Birinci açı  Degeri = ");
  Serial.println(birinci_deger);
muho2.write(ikinci_deger);
  Serial.print("ikinci açı  Degeri = ");
  Serial.println(ikinci_deger);
  delay(15);
}
