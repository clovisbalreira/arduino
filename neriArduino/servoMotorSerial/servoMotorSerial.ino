#include <Servo.h>

Servo servomotor;
int valorSerial = 0;
int pinLed = 13;
void setup()
{
  servomotor.attach(5);
  Serial.begin(9600);
  pinMode(pinLed, OUTPUT);
}

void loop()
{
  if(Serial.available() > 0){
	valorSerial = Serial.read();
    Serial.println(valorSerial);
	if(valorSerial == 76){
     digitalWrite(pinLed,HIGH);
  	 for(int i = 0; i <= 180; i++){
  		servomotor.write(i);
   		delay(20);
  	 }
  	 delay(2000);
  	 for( int i = 180; i >= 0; i++){
  		servomotor.write(i);
    	delay(20);
  	 }
    }
   	digitalWrite(pinLed,LOW);
  }
}