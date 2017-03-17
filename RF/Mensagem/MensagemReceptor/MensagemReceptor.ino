// Módulo receptor utilizando o MX-JS-05V.

#include <RH_ASK.h>
#include <SPI.h>

// Recepção utilizando o pino D2.
RH_ASK driver(2000, 2, 0);

void setup() {
  Serial.begin(9600);
  Serial.print("Iniciando...");
  if (!driver.init())
       Serial.println(" Erro!");
  else
    Serial.println("Ok!");
}

void loop() {
  uint8_t msg[RH_ASK_MAX_MESSAGE_LEN];
  uint8_t tam = sizeof(msg);

  // Recepção de dados não-blocante.
  if (driver.recv(msg, &tam)) {
    for (int i = 0; i < tam; i++) {
      Serial.print(char(msg[i]));
    }
    Serial.println("");
  }
}

