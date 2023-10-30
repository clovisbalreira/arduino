const int letPin = 9;
const int sensorLuminosidade = A0;
int luzLida  = 0; 
void setup()
{
  pinMode(letPin, OUTPUT);
  pinMode(sensorLuminosidade, INPUT);
  Serial.begin(9600);
}

void loop()
{
  luzLida = analogRead(sensorLuminosidade);
  Serial.print("luz lida: ");
  Serial.println(luzLida);
  //delay(1000);
  //if(luzLida < 512){
    //digitalWrite(letPin, HIGH);
  	analogWrite(letPin, HIGH);
  //}else{
  //	analogWrite(letPin, LOW);
  //}
}
