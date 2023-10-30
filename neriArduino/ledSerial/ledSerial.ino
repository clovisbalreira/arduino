const int ledPin = 13;
int numero = 0 ;
void setup()
{
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  if(Serial.available() > 0 ){
  	numero = Serial.read();
    Serial.print(numero);
  }
  if(numero == '1'){
  	digitalWrite(ledPin, HIGH);
  	delay(1000);
  }else if(numero == '2'){
    digitalWrite(13, HIGH);//HIGH = Envia corrente
    delay(1000); // delay(tempo) = tempo de duração
    digitalWrite(13, LOW); //LOW = Não envia corrente
    delay(1000);
  }else if (numero == '0'){
  	digitalWrite(ledPin, LOW);
  	delay(1000);
  }
}
