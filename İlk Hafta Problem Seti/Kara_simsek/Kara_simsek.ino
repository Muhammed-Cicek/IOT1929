// Muhammed ÇİÇEK tarafından hazırlandı
// KARA ŞİMŞEK PROJESİ 
int ledler[] = {2,3,4,5,6};  // ledlerin giriş pinleri
void setup() {
  for(int i=0; i<5; i++){     
  pinMode(ledler[i], OUTPUT);  // ledleri çıkış olarak tanımladık
  }
}
void loop() {
  for(int i=0; i<5; i++){
    digitalWrite(ledler[i], HIGH); // ledleri yaktık 
    delay(500); 
    digitalWrite(ledler[i], LOW);  // ledleri söndürdük
  }
  for(int j=4; j>-1; j--){
    digitalWrite(ledler[j], HIGH);  //terstten yaktık ledleri
    delay(500);
    digitalWrite(ledler[j], LOW);  // ledleri terstten söndürdük
  }
}
