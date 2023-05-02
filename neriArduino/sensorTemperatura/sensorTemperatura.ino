const int sensorDeTemperadura = A0;
int temperaduraLida = 0;
int ledPin = 9;
void setup()
{
  Serial.begin(9600);
  pinMode(ledPin,OUTPUT);
  pinMode(sensorDeTemperadura,INPUT);
}

void loop()
{
  temperaduraLida = analogRead(sensorDeTemperadura);
  delay(1000);
  Serial.println(temperaduraLida);
  if(temperaduraLida < 150){
    analogWrite(ledPin,255);
  }else{
    analogWrite(ledPin,0);
  }
  delay(1000);
}