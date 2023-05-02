int pinPotenciometro = 0;
int valorPotenciometro = 0;
int pinTransistor = 9;
void setup()
{
	Serial.begin(9600);
  pinMode(pinTransistor, OUTPUT);
}

void loop()
{
	valorPotenciometro = analogRead(pinPotenciometro)/4;
  	Serial.println(valorPotenciometro);
  	analogWrite(pinTransistor,valorPotenciometro);
  delay(1000);
}