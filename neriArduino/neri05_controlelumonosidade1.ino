const int letPin = 9;
int i = 0; 
void setup()
{
  pinMode(letPin, OUTPUT);
}

void loop()
{
  for(i=0; i <= 255; i++){
	analogWrite(letPin,i);
    delay(10);
  }
  delay(3000);
  for(i=255; i > 0; i--){
	analogWrite(letPin,i);
    delay(10);
  }

}