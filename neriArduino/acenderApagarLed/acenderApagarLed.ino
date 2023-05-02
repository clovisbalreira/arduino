const int letPin = 13;
//LED_BUILTIN == pino 13 - pina que ja tem resistor

void setup()
{
  pinMode(letPin, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);//HIGH = Envia corrente
  delay(1000); // delay(tempo) = tempo de duração
  digitalWrite(13, LOW); //LOW = Não envia corrente
  delay(1000);
}