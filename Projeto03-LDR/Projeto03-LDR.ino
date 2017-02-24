// Acende um LED caso a iluminação detectada pelo LDR seja baixa.

// Selecione o pino de entrada do LDR.
int ldr = A0;

// Selecione o pino do LED.
int led = 13;

// Variável para guardar o valor do LDR.
int valor = 0;

void setup() {
  // Configura a comunicação serial.
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(ldr, INPUT);
}

void loop() {
  // Lê o valor do LDR em uma escala de 0 a 1023.
  valor = analogRead(ldr);

  // Mostra no monitor o valor obtido do LDR.
  Serial.println(valor);

  // Acende o LED caso o ambiente esteja escuro.
  if (valor < 500)
    digitalWrite(led, HIGH);
  else
    digitalWrite(led, LOW);
}

