
// Trabalhando com Display LCD com I2C

#include <Wire.h> //INCLUSÃO DE BIBLIOTECA
#include <LiquidCrystal_I2C.h> //INCLUSÃO DE BIBLIOTECA

LiquidCrystal_I2C lcd(0x27,2,1,0,4,5,6,7,3, POSITIVE); //ENDEREÇO DO I2C E DEMAIS INFORMAÇÕES
 
void setup(){
 lcd.begin (16,2); //SETA A QUANTIDADE DE COLUNAS(16) E O NÚMERO DE LINHAS(2) DO DISPLAY
 lcd.setBacklight(HIGH); //LIGA O BACKLIGHT (LUZ DE FUNDO)
}
 
void loop(){
  lcd.setCursor(0,0); //SETA A POSIÇÃO DO CURSOR
  lcd.print("BOA NOITE!!!"); //IMPRIME O TEXTO NO DISPLAY LCD
  lcd.setCursor(0,1); //SETA A POSIÇÃO DO CURSOR
  lcd.print("DISPLAY COM I2C"); //IMPRIME O TEXTO NO DISPLAY LCD
  delay(5000); //INTERVALO DE 5 SEGUNDOS
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("DIMINUE A QUANTI");
  lcd.setCursor(0,1);
  lcd.print("DADE DE CABOS");
  delay(5000); 
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("UM GRANDE ABRACO");
  lcd.setCursor(0,1);
  lcd.print("ATE MAIS!!!");
  delay(5000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("UM GRANDE ABRACO");
  lcd.setCursor(0,1);
  lcd.print("ATE MAIS!!!");
  delay(5000);
  lcd.clear();
  lcd.setCursor(0,1);
  lcd.print("@sgmtec1");
  delay(5000);
  lcd.clear();
}
