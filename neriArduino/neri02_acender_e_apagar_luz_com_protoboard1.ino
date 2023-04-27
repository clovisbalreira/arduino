int pino01 = 13;
void setup()
{
  pinMode(pino01, OUTPUT);
}

void loop()
{
  digitalWrite(pino01, HIGH);//ligar
  delay(1000); // tempo
  digitalWrite(pino01, LOW);//apagar
  delay(1000); // Wait for 1000 millisecond(s)
}