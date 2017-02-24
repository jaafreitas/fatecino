// Ligando, desligando e alterando a intensidade luminosa de um LED

// Selecione o pino do LED.
int led = 9;

// Selecione o pino do botão.
int botao = 7;

int valor = LOW;
int valorAnterior = LOW;
int estado = LOW;

int brilho = 255;
unsigned long inicio;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(botao, INPUT);
}

void loop() {
  // Obtém LOW (botão não pressionado) ou HIGH (pressionado)
  valor = digitalRead(botao);

  if (valor == HIGH && valorAnterior == LOW) {
    estado = !estado;
    // Obtém a quantidade de milisegundos após o Arduino ser iniciado.
    inicio = millis();
  }
  
  if (estado == HIGH)
    // Define o nível de luminosidade do LED.
    analogWrite(led, brilho); 
  else
    // Apaga o LED.
    analogWrite(led, LOW); 
      
  // Verifica se o botão está sendo segurado pressionado
  if (valor == HIGH && valorAnterior == HIGH) {
    // Verifica se o botão está pressionado por mais de 0,5 segundos
    if (estado == HIGH && (millis() - inicio) > 500) {
      brilho++;
      delay(10);
      if (brilho >= 255)
        brilho = 0;      
    }
  }
  else {
    delay(50);
  }
  
  valorAnterior = valor;
}

