byte letPinos[] ={13,12,11,10,9,8,7,6,5,4};
void setup()
{
  /*pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);*/
  /*digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(4, HIGH);
  delay(1000); 
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  delay(1000);*/ 
  /*for(int pino = 13; pino >= 4; pino-- ){
    pinMode(pino,OUTPUT);
    for(int pino = 13; pino >= 4; pino-- ){
      digitalWrite(pino, HIGH);
  	}
    delay(1000);
    for(int pino = 13; pino >= 4; pino-- ){
      digitalWrite(pino, LOW);
  	}
    delay(1000);
  }*/
  for(int pino = 0; pino <= 9; pino++ ){
    pinMode(letPinos[pino],OUTPUT);
    for(int pino = 0; pino <= 9; pino++ ){
      digitalWrite(letPinos[pino], HIGH);
  	}
    delay(1000);
    for(int pino = 0; pino <= 9; pino++ ){
      digitalWrite(letPinos[pino], LOW);
  	}
    delay(1000);
  }
}
void loop()
{

}