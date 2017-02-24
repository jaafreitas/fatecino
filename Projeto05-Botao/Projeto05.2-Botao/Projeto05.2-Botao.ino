// Ligando e desligando um LED através do botão (com troca de estado)

// Selecione o pino do LED.
int led = 9;

// Selecione o pino do botão.
int botao = 7;

int valor;
int valorAnterior = LOW;
int estado = LOW;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(botao, INPUT);
}

void loop() {
  // Obtém LOW (botão não pressionado) ou HIGH (pressionado)
  valor = digitalRead(botao);

  if (valor == HIGH && valorAnterior == LOW) {
    estado = !estado;
  }
  digitalWrite(led, estado);
  delay(50);
  valorAnterior = valor;
}

