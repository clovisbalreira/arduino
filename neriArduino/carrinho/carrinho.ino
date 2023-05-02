#include <LiquidCrystal.h>
#include <Servo.h>
LiquidCrystal display(7, 8, 9, 10, 11, 12);
int potenciometro = 0;

Servo servomotorDireito;
Servo servomotorEsquerdo;

const int pinEcho = 5;
const int pinTrig = 4;
long duration;
int distanceCm, distanceInch;

int buzina = 6;

void setup() {
   	Serial.begin(9600);
  	display.begin(16, 2);  
  	display.setCursor(0,0);
  	display.print("Clovis");
  	display.setCursor(0,1);
  	display.print("Balreira");  

  	pinMode(pinEcho,INPUT);
	pinMode(pinTrig,OUTPUT);

	pinMode(buzina,OUTPUT);
}

void loop() {
  digitalWrite(pinTrig,LOW);
  delayMicroseconds(2);
  digitalWrite(pinTrig,HIGH);
  delayMicroseconds(10);
  digitalWrite(pinTrig,LOW);
  //int distanciEmCetimetros = (ultrasonic.Ranging(CH));
  duration = pulseIn(pinEcho, HIGH);
  distanceCm= duration*0.034/2;
  distanceInch = duration*0.0133/2;
  Serial.println(distanceCm);
  delay(1000);
  	if(distanceCm >= 70){
		iniciarMotores();
      	display.clear();
     	display.print("Frente");
      	display.setCursor(0,1);
      	display.print(distanceCm);
      	digitalWrite(buzina,LOW);
		delay(100);
  		giraRotaDireitaFrente();
  		giraRotaEsquerdaFrente();
    }else{
      pararMotores();
      display.clear();
      display.print("Parado");
      display.setCursor(0,1);
      display.print(distanceCm);
      delay(1000);
      giraRotaDireitaTras();
      giraRotaEsquerdaTras();
      display.clear();
      display.print("Ré");
      display.setCursor(0,1);
      display.print(distanceCm);
      digitalWrite(buzina,HIGH);
      delay(1000);
    }
}

void iniciarMotores(){
	servomotorDireito.attach(2);
  	delay(100);
    servomotorEsquerdo.attach(3);
}

void pararMotores(){
  	servomotorDireito.detach();
    servomotorEsquerdo.detach();
}
void giraRotaDireitaFrente(){
	servomotorDireito.write(180);
}

void giraRotaEsquerdaFrente(){
    servomotorEsquerdo.write(0);
}

void giraRotaDireitaTras(){
	servomotorDireito.write(0);
}

void giraRotaEsquerdaTras(){
    servomotorEsquerdo.write(180);
}