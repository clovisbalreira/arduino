#include <LiquidCrystal.h>

/*int RS = 7;
int E = 8;
int D4 = 9;
int D5 = 10;
int D6 = 11;
int D7 = 12;

bool turn = true;
long timer = 0;

byte hart[] = {
  B00000,
  B01010,
  B11111,
  B11111,
  B11111,
  B01110,
  B00100,
  B00000
};

LiquidCrystal lcd(RS, E, D4, D5, D6, D7);
*/
LiquidCrystal dlc(7, 8, 9, 10, 11, 12);
int potenciometro = 0;
void setup() { 
  dlc.begin(16, 2);  
  dlc.setCursor(0,0);
  dlc.print("Clovis");
  delay(5000);
  dlc.setCursor(0,1);
  dlc.print("Balreira");
  delay(5000);
}

void loop() {
  int valorPotenciometro = analogRead(potenciometro);
  dlc.clear();
  dlc.print("Rodrigues");
  delay(2000);  
}