// Uso do Sensor de Presença.

int ledMovimento = 6;
int ledParado = 7;
// Pino ligado ao sensor de presença.
int pinoPIR = 3; 

void setup() {
  pinMode(ledMovimento, OUTPUT);
  pinMode(ledParado, OUTPUT);
  pinMode(pinoPIR, INPUT);
  Serial.begin(9600);
}

void loop() {
  int acionamento = digitalRead(pinoPIR);  
  // Sem movimento, mantem led verde ligado.
  if (acionamento == LOW) {
    digitalWrite(ledMovimento, LOW);
    digitalWrite(ledParado, HIGH);
    Serial.println("Sem Movimento");
  }
  // Caso seja detectado um movimento, aciona o led vermelho.
  else {
    digitalWrite(ledMovimento, HIGH);
    digitalWrite(ledParado, LOW);
    Serial.println("Movimento Detectado");
  }
  delay(500);
}

