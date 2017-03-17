// Uso do Sensor de Temperatura DHT11

#include <Firmata.h>

// Library Manager -> DHT sensor library by Adafruit.
// https://github.com/adafruit/DHT-sensor-library
#include <DHT.h>

// Selecione o pino de sinal do DHT11.
#define DHTPIN 9

DHT sensor(DHTPIN, DHT11);

// Tempo de atualização entre as leituras em ms.
const int atraso = 2000;

#define pinoTemperatura 0

void setup() {
  Firmata.setFirmwareVersion(FIRMATA_FIRMWARE_MAJOR_VERSION, FIRMATA_FIRMWARE_MINOR_VERSION);
  Firmata.begin(57600);

  sensor.begin();
}

void loop() {
  int temperatura = sensor.readTemperature();
  Firmata.sendAnalog(pinoTemperatura, temperatura);
  delay(atraso);  
}

