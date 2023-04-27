#include <Servo.h>

Servo servomotor;
int pinPotenciometro = 0;
int valorPotenciometro = 0;
int angulo = 0;
void setup()
{
  servomotor.attach(5);
}

void loop()
{
	valorPotenciometro = analogRead(pinPotenciometro);
  	angulo = map(valorPotenciometro,0,1023,0,180);
  	servomotor.write(angulo);
  	delay(20);
}