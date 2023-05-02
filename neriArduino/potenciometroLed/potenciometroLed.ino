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
  analogWrite(ledPin,potenciometroLida/4);
  Serial.println(potenciometroLida);
  delay(500);
  
}