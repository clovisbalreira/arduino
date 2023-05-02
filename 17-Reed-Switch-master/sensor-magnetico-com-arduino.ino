/*
Sensor magnetico com arduino e display
*/

// include the library code:
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

const int pinoLed = 7; //PINO DIGITAL UTILIZADO PELO LED
const int pinoSensor = 8; //PINO DIGITAL UTILIZADO PELO SENSOR

// make some custom characters:
byte heart[8] = {
  0b00000,
  0b01010,
  0b11111,
  0b11111,
  0b11111,
  0b01110,
  0b00100,
  0b00000
};

byte smiley[8] = {
  0b00000,
  0b00000,
  0b01010,
  0b00000,
  0b00000,
  0b10001,
  0b01110,
  0b00000
};

byte frownie[8] = {
  0b00000,
  0b00000,
  0b01010,
  0b00000,
  0b00000,
  0b00000,
  0b01110,
  0b10001
};

byte armsDown[8] = {
  0b00100,
  0b01010,
  0b00100,
  0b00100,
  0b01110,
  0b10101,
  0b00100,
  0b01010
};

byte armsUp[8] = {
  0b00100,
  0b01010,
  0b00100,
  0b10101,
  0b01110,
  0b00100,
  0b00100,
  0b01010
};

void setup() {
  Serial.begin(9600);
  pinMode(pinoSensor, INPUT); //DEFINE O PINO COMO ENTRADA
  pinMode(pinoLed, OUTPUT); //DEFINE O PINO COMO SAÍDA
  digitalWrite(pinoLed, LOW); //LED INICIA DESLIGADO
  
  // initialize LCD and set up the number of columns and rows:
  lcd.begin(16, 2);

  // create a new character
  lcd.createChar(0, heart);
  // create a new character
  lcd.createChar(1, smiley);
  // create a new character
  lcd.createChar(2, frownie);
  // create a new character
  lcd.createChar(3, armsDown);
  // create a new character
  lcd.createChar(4, armsUp);

  // set the cursor to the top left
  lcd.setCursor(0, 0);
  lcd.clear();
  // Print a message to the lcd.
  lcd.print("SENSOR MAGNETICO");
  Serial.print("SENSOR MAGNETICO");
  Serial.println();

}

void loop() {
  lcd.setCursor(2, 1);
   if(digitalRead(pinoSensor) == HIGH){ //SE A LEITURA DO PINO FOR IGUAL A LOW, FAZ
      digitalWrite(pinoLed, HIGH); //ACENDE O LED
      lcd.write((byte)4);
      lcd.print("  ABERTO  ");
      lcd.write((byte)4);
      Serial.println("PORTAO ABERTO");

  }else{ //SENÃO, FAZ
    digitalWrite(pinoLed, LOW); //APAGA O LED
    lcd.write((byte)3);
    lcd.print(" FECHADO ");
    lcd.write((byte)3);
    lcd.print("    ");
    Serial.println("PORTAO FECHADO");
  }
}
