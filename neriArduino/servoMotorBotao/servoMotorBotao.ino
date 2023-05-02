#include <Servo.h>

Servo servomotor;
int botao = 2;
void setup()
{
  servomotor.attach(5);
  pinMode(botao,INPUT);
  Serial.begin(9600);
}

void loop()
{
  int apertouBotao = digitalRead(botao);
  Serial.println(apertouBotao);
	if(apertouBotao == HIGH){
     for(int i = 0; i <= 180; i++){
  		servomotor.write(i);
   		delay(20);
  	}
  	delay(2000);
  	for( int i = 180; i >= 0; i++){
  		servomotor.write(i);
    	delay(20);
  	}
  	delay(2000);
  }
  	delay(1000);}