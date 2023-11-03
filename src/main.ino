#include <Arduino.h>
#include "modules/lcd/lcd.h"
#include "modules/humedad/modulo-humedad.h"
#include "modules/temperatura/modulo-temperatura.h"

int h = 0;
int t = 0;

void setup()
{
  config();
}

void loop()
{
  h = medirHumedad();
  t = medirTemperatura();
  showLcd(h, t);
}