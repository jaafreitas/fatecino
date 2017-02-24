// Controlar um LED através da saída digital.

// Utilizando o LED interno.
int LED = LED_BUILTIN;

// Utilizando um pino digital.
//int LED = 13;

void setup() {
  // Definir o pino como saída.
  pinMode(LED, OUTPUT); 
}

void loop() {
  // Colocar nível 1 no pino (acende o LED).
  digitalWrite(LED, HIGH);

  // Aguardar por 2 segundos.
  delay(2000);

  // Colocar nível 0 no pino (apaga o LED).
  digitalWrite(LED, LOW); 

  // Aguardar por 2 segundos novamente.
  delay(2000);
}

