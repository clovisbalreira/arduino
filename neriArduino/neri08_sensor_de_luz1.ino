const int sensorDeLuz = 0;
int luzLida = 0;
int ledPin = 9;
void setup()
{
  pinMode(ledPin,OUTPUT);
}

void loop()
{
  luzLida = analogRead(sensorDeLuz);
  delay(1000);
  //for(int i = 0; i < 1000; i+=50){
  	//luzLida = i;
    if(luzLida < 512){
      analogWrite(ledPin,255);
    }else{
      analogWrite(ledPin,0);
    }
    delay(1000);
  //}
  
}