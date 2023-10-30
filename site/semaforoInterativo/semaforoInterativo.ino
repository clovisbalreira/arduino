const int carroVermelho = 9;
const int carroAmarelo = 8;
const int carroVerde = 7;
const int botao = 2;
const int pedestreVermelho = 6;
const int pedestreVerde = 5;
const int tempoEspera = 6000;
unsigned long tempo = tempoEspera;
int pedestreAcionouBotao = 0;
int semaforo = 0;
int semaforoBotao = 0;
void setup(){
  pinMode(carroVermelho, OUTPUT);
  pinMode(carroAmarelo, OUTPUT);
  pinMode(carroVerde, OUTPUT);
  pinMode(pedestreVermelho, OUTPUT);
  pinMode(pedestreVerde, OUTPUT);
  pinMode(botao, INPUT);
  Serial.begin(9600);
}

void loop(){  
  if(Serial.available() > 0 ){
    semaforo = Serial.read();
    Serial.println(semaforo);
  }

  /*pedestreAcionouBotao = digitalRead(botao);
  if(pedestreAcionouBotao == HIGH && (millis() - tempo) > 6000){
    if(semaforo == '1'){
      pedestre();
    }else{
      acender();
      delay(1000);
      semaforo = '1';
    }
  }*/
  if(semaforo == '1'){
    acender();
  }
}

void acender(){
    digitalWrite(carroVerde,HIGH);
    digitalWrite(pedestreVermelho,HIGH);
    semaforoBotao = 1;
}

void pedestre(){
    digitalWrite(carroVerde,LOW);
    digitalWrite(carroAmarelo,HIGH);
    delay(3000);
    digitalWrite(carroAmarelo,LOW);
    digitalWrite(carroVermelho,HIGH);
    delay(3000);
    digitalWrite(pedestreVermelho,LOW);
    digitalWrite(pedestreVerde,HIGH);
    delay(3000);
    for(int i = 0; i <=10;i++){
      digitalWrite(pedestreVerde,HIGH);
      delay(250);
      digitalWrite(pedestreVerde,LOW);
      delay(250);
    }
    digitalWrite(pedestreVermelho,HIGH);
    delay(1000);
    digitalWrite(carroAmarelo,HIGH);
    digitalWrite(carroVermelho,LOW);
    delay(1000);
    digitalWrite(carroAmarelo,LOW);
    digitalWrite(carroVerde,HIGH);
    tempo = millis();
    semaforo = '1';
}

void apagar(){
    digitalWrite(carroVerde,LOW);
    digitalWrite(carroAmarelo,LOW);
    digitalWrite(carroVermelho,LOW);
    digitalWrite(pedestreVermelho,LOW);
    digitalWrite(pedestreVerde,LOW);
}
