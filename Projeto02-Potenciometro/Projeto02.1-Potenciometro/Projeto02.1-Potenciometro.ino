//Liga e desliga um LED na frequência determinada pelo potenciômetro.

// Selecione o pino de entrada do potenciômetro.
int pot = A0;

// Selecione o pino do LED.
int led = 13;

// Variável para guardar o valor do potenciômetro.
int valor = 0;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(pot, INPUT);
}

void loop() {
  valor = analogRead(pot);
  Serial.println(valor);
  
  digitalWrite(led, HIGH);
  delay(valor);
  
  digitalWrite(led, LOW);
  delay(valor);
}

