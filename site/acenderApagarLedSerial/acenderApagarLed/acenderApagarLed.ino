const int letPin = 13;
//LED_BUILTIN == pino 13 - pina que ja tem resistor
int numero = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(letPin, OUTPUT);
}

void loop()
{
  if(Serial.available() > 0){
    numero = Serial.read();
    Serial.print(numero);
  }
  if(numero == '1'){
    digitalWrite(13, HIGH);//HIGH = Envia corrente
    delay(1000); // delay(tempo) = tempo de duração
    digitalWrite(13, LOW); //LOW = Não envia corrente
    delay(1000);
  }else if(numero == '0'){
    digitalWrite(13, LOW); //LOW = Não envia corrente
    delay(1000);
  }
}
