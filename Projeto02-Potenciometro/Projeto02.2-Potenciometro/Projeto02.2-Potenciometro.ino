// Controla a intensidade da luminosidade de um LED pela frequência determinada pelo potenciômetro.

// Selecione o pino de entrada do potenciômetro.
int pot = A0;

// Selecione o pino do LED.
int led = 9;

// Variável para guardar o valor do potenciômetro.
int valor = 0;

void setup() {
  // Configura a comunicação serial.
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(pot, INPUT);
}

void loop() {
  // Lê o valor do pontenciômetro em uma escala de 0 a 1023.
  valor = analogRead(pot);

  // Mostra no monitor o valor obtido do potenciômetro.
  Serial.println(valor);

  // Acende o led com intensidade proporcional ao valor obtido
  // em uma escala de 0 a 255
  analogWrite(led, valor / 4);
}

