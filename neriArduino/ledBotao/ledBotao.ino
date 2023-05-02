int letPin = 13;
int botaoLigar = 8;
int botaoPressionado = 0;
boolean ligar = false;
int anterior = 0;
int state = 0;
void setup()
{
  pinMode(letPin,OUTPUT);
  pinMode(botaoLigar,INPUT);
}

void loop()
{
  botaoPressionado = digitalRead(botaoLigar);
  if((botaoPressionado == HIGH) && (anterior == 0)){
    if(ligar == false){
    	ligar = true;
    }else{
      ligar = false;
      //state = 1 - state;
      delay(10);
    }
  }
  anterior = botaoPressionado;
  if(ligar == false){
  	digitalWrite(letPin, HIGH);
  }else{
  	digitalWrite(letPin, LOW);
  }
}