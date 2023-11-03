#include <Arduino.h>
#include "LiquidCrystal.h"
const int rs = 12, en = 11, d4 = 9, d5 = 8, d6 = 7, d7 = 6;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void config()
{
    lcd.begin(16, 2);
    lcd.print("Humedad:    %");
    lcd.setCursor(0, 1);
    lcd.print("Temp:       C");
}


void showLcd(int a, int b)
{
    lcd.setCursor(10, 0);
    lcd.print(a);   //Imprime valor de humedad
    lcd.setCursor(10, 1);
    lcd.print(b);   //Imprime valor de temperatura
}