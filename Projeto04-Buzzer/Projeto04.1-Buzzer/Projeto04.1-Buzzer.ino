// Uso das funções tone(pino, frequência) e noTone(pino)

// Selecione o pino do Buzzer.
int buzzer = 9;

void setup() {
  pinMode(buzzer, OUTPUT);
}

void loop() {
  // Define pino e a frequência.
  tone(buzzer, 1200);
  delay(500);

  // Desliga o buzzer.
  noTone(buzzer);
  delay(500);
}

