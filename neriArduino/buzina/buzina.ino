const int sensorDeLuz = A0;
int luzLida = 0;
int ledPin = 9;
int buzina = 2;
void setup()
{
  Serial.begin(9600);
  pinMode(ledPin,OUTPUT);
  pinMode(buzina,OUTPUT);
  pinMode(sensorDeLuz,INPUT);
}

void loop()
{
  luzLida = analogRead(sensorDeLuz);
  delay(1000);
  Serial.println(luzLida);
  if(luzLida < 512){
    //digitalWrite(buzina,HIGH);
    analogWrite(ledPin,255);
  }else{
    analogWrite(ledPin,0);
    //digitalWrite(buzina,LOW);
  }
  delay(1000);
}