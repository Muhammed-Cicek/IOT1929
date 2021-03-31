// Muhammed ÇİÇEK tarafından hazırlandı
// Trafik işaretleri PROJESİ 

int kirmiziled=4;
int sariled=3;
int yesilled=2;

void setup() {
  pinMode(kirmiziled, OUTPUT);  // ledi çıkış olarak tanımladık
  pinMode(sariled, OUTPUT);    // ledi çıkış olarak tanımladık
  pinMode(yesilled, OUTPUT);  // ledi çıkış olarak tanımladık
  }


void loop() {

    digitalWrite(kirmiziled, HIGH); // ledi yaktık 
    delay(10000); 
    digitalWrite(sariled, HIGH); // ledi yaktık 
    delay(10000);   
    digitalWrite(kirmiziled, LOW);  // ledi söndürdük
    digitalWrite(sariled, HIGH); // ledi yaktık 
    delay(2000); 
    digitalWrite(sariled, LOW);  // ledi söndürdük
    digitalWrite(yesilled, HIGH);  //yaktık ledleri
    delay(5000);
    digitalWrite(yesilled, LOW);  // ledi söndürdük
  }
