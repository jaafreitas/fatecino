// Ligando e desligando um LED através do botão

// Selecione o pino do LED.
int led = 9;

// Selecione o pino do botão.
int botao = 7;

int valor;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(botao, INPUT);
}

void loop() {
  // Obtém LOW (botão não pressionado) ou HIGH (pressionado)
  valor = digitalRead(botao);

  digitalWrite(led, valor);
}

