// Uso do Sensor de Temperatura DHT11

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
  // Obtém a temperatura.
  float temperaturaCelsius = sensor.readTemperature();
  float temperaturaFahrenheit = sensor.readTemperature(true);
  float temperaturaKelvin = temperaturaCelsius + 273.15;

  // Obtém a umidade.
  float umidade = sensor.readHumidity(); 
  
  // Exibir a temperatura e a umidade na serial.
  Serial.print("Temperatura: ");  
  Serial.print(temperaturaCelsius);
  Serial.print("\260C / ");
  Serial.print(temperaturaFahrenheit);
  Serial.print("\260F / ");
  Serial.print(temperaturaKelvin);
  Serial.print("K, Umidade: ");
  Serial.print(umidade);
  Serial.println("%");
  delay(atraso);
}

