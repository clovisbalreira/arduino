// Open Source
// Trabalhando com Display LCD com I2C

#include <Wire.h> //INCLUSÃO DE BIBLIOTECA
#define pinoRele 7
#define pinoSom A0

bool rele;

void setup(){
  Serial.begin(9600);
  pinMode(pinoRele, OUTPUT); //DEFINE O PINO COMO SAÍDA
  pinMode(pinoSom, INPUT); //DEFINE O PINO COMO ENTRADA

  rele=false;
  digitalWrite (pinoRele, rele);
  
}

void loop(){
  Serial.print("COMANDO DE LUZ");

  if (digitalRead(pinoSom) == HIGH){ //SE A LEITURA DO PINO FOR IGUAL A HIGH, FAZ
      rele =! rele; //LÊ O ESTADO ATUAL DO PINO E ARMAZENA NA VARIÁVEL
  }
  digitalWrite(pinoRele, rele);
  
}
