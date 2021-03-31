// Muhammed ÇİÇEK tarafından hazırlandı
// Motor PROJESİ 

const int DC = 3;
const int pot = A0;
int motor;
int motor2;
int maviled = 6;

void setup()
{
 pinMode(maviled, OUTPUT); 
 pinMode(DC, OUTPUT);
 Serial.begin(9600); 
}

void loop()
{
int oku = analogRead(A0);
float hiz = oku*15.0; 
  hiz /= 1024.0;
motor = analogRead(pot);
motor2= map(motor,0, 1023, 0, 255);
analogWrite(DC, motor2);
 Serial.print(hiz);
Serial.println(" m/s hızında");
delay(1000); 

if(hiz > 10){
 digitalWrite(maviled,HIGH);
}
else {
 digitalWrite(maviled,LOW);
}
}
