#include <IRremote.h>

int RECV_PIN = 11; // pino do receptor IR
IRrecv irrecv(RECV_PIN);
decode_results results;

void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn(); // habilita o receptor IR
}

void loop() {
  if (irrecv.decode(&results)) {
    Serial.println(results.value, DEC); // imprime o código do botão pressionado
    irrecv.resume(); // recebe o próximo sinal IR
    irsend.sendNEC(results.value, 32); // envia o sinal IR para o LED IR
  }
}