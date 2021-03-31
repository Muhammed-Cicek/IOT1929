
 int RST_PIN = D3; //RC522 modülü reset pinini tanımlıyoruz.
 int SS_PIN = D4; //RC522 modülü chip select pinini tanımlıyoruz.
 int YesilLed = D0; 
 int KirmiziLed = D1; 
#include <SPI.h>
#include <MFRC522.h>
MFRC522 rfid(SS_PIN, RST_PIN); //RC522 modülü ayarlarını yapıyoruz.
byte ID[4] = {112,133,86,50}; //Yetkili kart ID'sini tanımlıyoruz. 

void setup() {
  pinMode(YesilLed,OUTPUT);
  pinMode(KirmiziLed,OUTPUT);
  Serial.begin(9600); //Seri haberleşmeyi başlatıyoruz.
  SPI.begin(); //SPI iletişimini başlatıyoruz.
  rfid.PCD_Init(); //RC522 modülünü başlatıyoruz.
}

void loop() {
  if (!rfid.PICC_IsNewCardPresent()) //Yeni kartın okunmasını bekliyoruz.
    return;
  if (!rfid.PICC_ReadCardSerial()) //Kart okunmadığı zaman bekliyoruz.
      return;
  if (rfid.uid.uidByte[0] == ID[0] && //Okunan kart ID'si ile ID değişkenini karşılaştırıyoruz.
    rfid.uid.uidByte[1] == ID[1] &&
    rfid.uid.uidByte[2] == ID[2] &&
    rfid.uid.uidByte[3] == ID[3]) {
    Serial.println("iyi Günler Muhammed Bey ");
    ekranaYazdir();
      digitalWrite(YesilLed, 1);                           
      delay(3000);
      digitalWrite(YesilLed, 0);
  }
  else {                             //Yetkisiz girişte içerideki komutlar çalıştırılır.
    Serial.println("Kart Tanımsız !!! ");
    ekranaYazdir();
    digitalWrite(KirmiziLed,1);
    delay(3000);
    digitalWrite(KirmiziLed,0);
  }
  rfid.PICC_HaltA();
}

void ekranaYazdir() {
  Serial.print("ID Numarasi: ");
  for (int sayac = 0; sayac < 4; sayac++) {
    Serial.print(rfid.uid.uidByte[sayac]);
    Serial.print(" ");
  }
  Serial.println("");
}
