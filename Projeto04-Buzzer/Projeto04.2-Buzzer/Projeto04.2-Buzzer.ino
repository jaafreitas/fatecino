// Uso a função tone(pino, frequência, duração)

// Selecione o pino do Buzzer.
int buzzer = 9;

void setup() {
  pinMode(buzzer, OUTPUT);
}

void loop() {
  // Define pino, a frequência e duração
  tone(buzzer, 1200, 500);
  delay(1000);
}

