#include <Arduino.h>
#include "LiquidCrystal.h"
const int rs = 12, en = 11, d4 = 9, d5 = 8, d6 = 7, d7 = 6;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void config()
{
    lcd.begin(16, 2);
    lcd.print("Humedad:    %");
}

 

void showLcd(int a)
{
    lcd.setCursor(10, 0);
    delay(500);
    lcd.print(a);
    a++;
}