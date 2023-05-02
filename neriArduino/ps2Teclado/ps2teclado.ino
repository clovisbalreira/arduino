//procurar DataShet com o codigo do produto
#include <PS2Keyboard.h>
PS2Keyboard ps2keyboard;
const int DataPin = 2;
const int IPQPin = 2;

void setup(){
  delay(2000);
  ps2keyboard.begin(DataPin, IPQPin);
  Serial.begin(9600);
  Serial.println("aguardando teclas: "):
}

void loop(){
  if(ps2keyboard.available()){
  	char teclaPressionada = ps2keyboard.Read();
    if(teclaPressionada == PS2_ENTER){
        Serial.println("ENTER");
    }else if(teclaPressionada == PS2_DELETE){
        Serial.println("DELETE");
    }else if(teclaPressionada == PS2_PAGEUP){
        Serial.println("PAGEUP");
    }else if(teclaPressionada == PS2_PAGEDOWN){
        Serial.println("PAGEDOWN");
    }else if(teclaPressionada == PS2_ESC){
        Serial.println("ESC");
    }else{
	    Serial.println(teclaPressionada);
    }
  }
}