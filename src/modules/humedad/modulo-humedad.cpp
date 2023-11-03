//Contiene en detalle el código de las funciones y variables detalladas en header

#include "modules/dht/Adafruit_Sensor.h"
#include "modules/dht/DHT.h"

int sensorHum = 0; //Se establece que el pin 0 es el pin para el sensor

int humedad;       //Se declara la variable para guardar el valor de humedad medido

DHT dhtHum(sensorHum, DHT11); //Instancia de un objeto tipo DHT11

int medirHumedad() //Función para tomar humedad
{
    dhtHum.begin(); //Prepara el sensor para la toma de datos de humedad
    humedad = dhtHum.readHumidity();
    return humedad;  
}