// Uso do Sensor de Temperatura DHT11

// Library Manager -> DHT sensor library by Adafruit.
// https://github.com/adafruit/DHT-sensor-library
#include <DHT.h>

// Selecione o pino de sinal do DHT11.
#define DHTPIN 9

DHT sensor(DHTPIN, DHT11);

// Tempo de atualização entre as leituras em ms.
const int atraso = 2000;

void setup() {
  Serial.begin(9600);
  sensor.begin();
}

void loop() {
  int temperatura = sensor.readTemperature();
  Serial.print(temperatura);
  Serial.print(char('\0'));
  delay(atraso);
}

