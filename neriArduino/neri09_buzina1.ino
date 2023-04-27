const int sensorDeLuz = 0;
int luzLida = 0;
int ledPin = 9;
int buzina = 2;
void setup()
{
  pinMode(ledPin,OUTPUT);
  pinMode(buzina,OUTPUT);
}

void loop()
{
  luzLida = analogRead(sensorDeLuz);
  delay(1000);
  for(int i = 0; i < 1000; i+=50){
  	luzLida = i;
    if(luzLida < 512){
	  digitalWrite(buzina,HIGH);
      analogWrite(ledPin,255);
    }else{
      analogWrite(ledPin,0);
  		digitalWrite(buzina,LOW);
    }
    delay(1000);
  }
  
}