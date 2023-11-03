//Contiene en detalle el código de las funciones y variables detalladas en header

//Librerias/ficheros que no son locales
#include "modules/dht/Adafruit_Sensor.h"
#include "modules/dht/DHT.h"

int sensorTemp = 0;
int temperatura;

DHT dhtTemp(sensorTemp, DHT11); //Instancia de un objeto tipo DHT11

int medirTemperatura() //Función para tomar temperatura
{
    dhtTemp.begin(); //Prepara el sensor para la toma de datos de temperatura
    temperatura = dhtTemp.readTemperature();
    return temperatura;  
}