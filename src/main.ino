#include <Arduino.h>
#include "modules/lcd/lcd.h"
#include "modules/humedad/modulo-humedad.h"
int h = 0;

void setup()
{
  config();
}

void loop()
{
  h = medirHumedad();
  showLcd(h);
}