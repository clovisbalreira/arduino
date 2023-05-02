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
  }else if (numero == '0'){
  	digitalWrite(ledPin, LOW);
  	delay(1000);
  }
}