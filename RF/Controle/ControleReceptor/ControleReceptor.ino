// Módulo receptor utilizando o MX-JS-05V.

#include <RH_ASK.h>
#include <SPI.h>

// Recepção utilizando o pino D2.
RH_ASK driver(2000, 2, 0);

char debug[100];

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
    int cliente = msg[0] - '0';
    int porta = msg[1] - '0';
    int estado = msg[2] - '0';
    
    sprintf(debug, "Cliente: %d, Porta: %d, Estado: %d", cliente, porta, estado);
    Serial.println(debug);

    if (cliente == 1) {
      pinMode(porta, OUTPUT);
      digitalWrite(porta, estado);
    }
  }
}

