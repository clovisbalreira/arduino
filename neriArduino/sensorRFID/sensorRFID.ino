/*
    Materiais necessários:

    Módulo RFID (por exemplo, o MFRC522)
    Arduino Uno
    Breadboard
    Jumpers

    Conecte o módulo RFID ao Arduino:

    Conecte o pino SDA do módulo RFID ao pino 10 do Arduino
    Conecte o pino SCK do módulo RFID ao pino 13 do Arduino
    Conecte o pino MOSI do módulo RFID ao pino 11 do Arduino
    Conecte o pino MISO do módulo RFID ao pino 12 do Arduino
    Conecte o pino RST do módulo RFID ao pino 9 do Arduino
    Conecte o pino GND do módulo RFID ao GND do Arduino
    Conecte o pino 3.3V do módulo RFID ao 3.3V do Arduino

    Baixe a biblioteca MFRC522:

    Vá para o menu "Sketch" -> "Incluir Biblioteca" -> "Gerenciar Bibliotecas"
    Pesquise por "MFRC522"
    Selecione a biblioteca "MFRC522" de "Github Community Library" e clique em "Instalar"
*/

#include <SPI.h>
#include <MFRC522.h>

#define SS_PIN 10
#define RST_PIN 9

MFRC522 rfid(SS_PIN, RST_PIN); // Instancia o objeto MFRC522

void setup() {
  Serial.begin(9600); // Inicializa a comunicação serial
  SPI.begin(); // Inicializa a comunicação SPI
  rfid.PCD_Init(); // Inicializa o módulo RFID
}

void loop() {
  // Verifica se há cartão presente
  if (rfid.PICC_IsNewCardPresent() && rfid.PICC_ReadCardSerial()) {
    // Lê o UID do cartão
    String uid = "";
    for (byte i = 0; i < rfid.uid.size; i++) {
      uid += String(rfid.uid.uidByte[i], HEX);
    }
    Serial.println("UID: " + uid); // Imprime o UID do cartão
    delay(1000);
  }
}
/*
#include <SofwareSerial.h>
SofwareSerial mySerial(10,11);
void setup(){
	Serial.begin(9600);
    mySerial.begin(9600);
}
void loop(){
	if(mySerial.available()){
    	Serial.write(mySerial.read());	
	}
    if(Serial.available()){
    	mySerial.write(Serial.read());
	}
    while(mySerial.available() > 0){
    	Serial.println("Estou dentro do while");
        valorLido = mySerial.read();
        RFIDLido += valorLido
    }
}
*/