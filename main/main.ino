#define LED 13  //pin for the LED labelled "L"

//motor control pins
#define M1 4 
#define E1 5 

#define E2 6 
#define M2 7 

#define M3 8 
#define E3 9

#define E4 10 
#define M4 11 




int incomingByte = 0;  // for incoming serial data

void stop()  //stop
{
  analogWrite(E3, 0);
  digitalWrite(M3, HIGH);
  analogWrite(E4, 0);
  digitalWrite(M4, HIGH);
  analogWrite(E1, 0);
  digitalWrite(M1, HIGH);
  analogWrite(E2, 0);
  digitalWrite(M2, HIGH);
  return;
}

void move(bool m1, bool m2, bool m3, bool m4, int vitesse=100){
  analogWrite(E3, vitesse);
  digitalWrite(M3, m3);
  analogWrite(E4, vitesse);
  digitalWrite(M4, !m4);
  analogWrite(E1, vitesse);
  digitalWrite(M1, m1);
  analogWrite(E2, vitesse);
  digitalWrite(M2, !m2);
}

void setup() {
  Serial.begin(9600);
}

void loop() {
  move(1,0,1,0);
}







