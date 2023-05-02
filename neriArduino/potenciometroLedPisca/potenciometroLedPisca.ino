const int sensorDoPotenciometro = 0;
int potenciometroLida = 0;
int ledPin = 9;
void setup()
{
  Serial.begin(9600);
  pinMode(ledPin,OUTPUT);
}

void loop()
{
  potenciometroLida = analogRead(sensorDoPotenciometro);
  int tempo = potenciometroLida;
  analogWrite(ledPin,255);
  delay(tempo);
  analogWrite(ledPin,0);
  delay(tempo);
  Serial.println(potenciometroLida);
}