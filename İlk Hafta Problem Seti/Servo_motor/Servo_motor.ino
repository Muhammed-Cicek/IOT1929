// Muhammed ÇİÇEK tarafından hazırlandı
// Servo Motor PROJESİ 

#include<Servo.h>
Servo muho;

void setup()
{
  muho.attach(3);
}

void loop()
{
   for(int baslangic = 0;baslangic <= 180; baslangic= baslangic + 15)
  {
  muho.write(baslangic);
  delay(1000);  
  }

 for(int bitis = 180;bitis >= 0; bitis= bitis - 30)
  {
  muho.write(bitis);
  delay(1000);  
  }  
  
}
