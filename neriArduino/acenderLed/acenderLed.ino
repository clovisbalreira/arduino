const int ledPin = 13;
void setup() {
  // put your setup code here, to run once:
  // informa saida e entradas   
  pinMode(ledPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin,HIGH); //ACENDE A LUZ
  delay(500);
  digitalWrite(ledPin,LOW); //APAGA LUZ
  delay(500);
}
