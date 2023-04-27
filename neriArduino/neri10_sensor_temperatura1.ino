const int sensorDeTemperadura = 0;
int temperaduraLida = 0;
int ledPin = 9;
void setup()
{
  //Serial.begin(9600);
  pinMode(ledPin,OUTPUT);
}

void loop()
{
  temperaduraLida = analogRead(sensorDeTemperadura);
  delay(1000);
  //for(int i = 0; i < 1000; i+=50){
  	//temperaduraLida = i;
    if(temperaduraLida < 512){
      analogWrite(ledPin,255);
    }else{
      analogWrite(ledPin,0);
    }
    delay(1000);
  	//Serial.println(temperaduraLida);
  //}
  
}