const int ledVermelho = 9;
const int ledAmarelo = 8;
const int ledVerde = 7;
void setup()
{
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
}

void loop()
{
  
	digitalWrite(ledVermelho,HIGH);
  	delay(3000);
	digitalWrite(ledAmarelo,HIGH);
  	delay(3000);
	digitalWrite(ledVermelho,LOW);
  	digitalWrite(ledAmarelo,LOW);
	digitalWrite(ledVerde,HIGH);
  	delay(5000);
	digitalWrite(ledAmarelo,HIGH);
	digitalWrite(ledVerde,LOW);
	delay(2000);
	digitalWrite(ledAmarelo,LOW);
}
