const int carroVermelho = 9;
const int carroAmarelo = 8;
const int carroVerde = 7;
const int botao = 2;
const int pedestreVermelho = 6;
const int pedestreVerde = 5;
const int tempoEspera = 6000;
unsigned long tempo = tempoEspera;
void setup(){
  Serial.begin(9600);
  pinMode(carroVermelho, OUTPUT);
  pinMode(carroAmarelo, OUTPUT);
  pinMode(carroVerde, OUTPUT);
  pinMode(pedestreVermelho, OUTPUT);
  pinMode(pedestreVerde, OUTPUT);
  pinMode(botao, INPUT);
  digitalWrite(carroVerde,HIGH);
  digitalWrite(pedestreVermelho,HIGH);
}

void loop(){  
  int pedestreAcionouBotao = digitalRead(botao);
  //if(pedestreAcionouBotao == HIGH && (millis() - tempo) > 6000){
  //if(pedestreAcionouBotao == HIGH ){
      Serial.println(pedestreAcionouBotao);
      delay(1000);
  //	digitalWrite(carroVerde,LOW);
	  digitalWrite(carroAmarelo,HIGH);
	//  delay(3000);
	//  digitalWrite(carroAmarelo,LOW);
	  digitalWrite(carroVermelho,HIGH);
  //	delay(3000);
  //  digitalWrite(pedestreVermelho,LOW);
  	digitalWrite(pedestreVerde,HIGH);
  //	delay(3000);
  //  for(int i = 0; i <=10;i++){
  //    digitalWrite(pedestreVerde,HIGH);
	//    delay(250);
  //    digitalWrite(pedestreVerde,LOW);
	//    delay(250);
  //  }
	//  digitalWrite(pedestreVermelho,HIGH);
  //  delay(1000);
	//  digitalWrite(carroAmarelo,HIGH);
	//  digitalWrite(carroVermelho,LOW);
  //  delay(1000);
	//  digitalWrite(carroAmarelo,LOW);
	//  digitalWrite(carroVerde,HIGH);
  //  tempo = millis(); 
	//}
  //digitalWrite(carroVerde,HIGH);
}
