// Uso do Sensor Ultrassônico (HC-SR04)

// Pino que recebe o pulso do echo.
const int echoPino = 12;

// Pino que envia o pulso para gerar o echo.
const int trigPino = 13;

void setup() {
  Serial.begin(9600);
  pinMode(echoPino, INPUT);
  pinMode(trigPino, OUTPUT);
}

void loop() {
  long duracao = 0;
  long distancia = 0;

  // Pino trigger com um pulso baixo LOW (desligado).
  digitalWrite(trigPino, LOW);
  
  // Delay (atraso) de 10 microssegundos.
  delayMicroseconds(10);
  
  // Pino trigger com pulso HIGH (ligado).
  digitalWrite(trigPino, HIGH);
  
  // Delay (atraso) de 10 microssegundos.
  delayMicroseconds(10);
  
  // Pino trigger com um pulso baixo LOW (desligado) novamente.
  digitalWrite(trigPino, LOW);    
  
  // A função pulseInt verifica o tempo que o pino ECHO ficou HIGH
  // Calculando, desta forma, a duração do tráfego do sinal.
  duracao = pulseIn(echoPino, HIGH);

  distancia = duracao / 58;
  Serial.print("Distancia em cm: ");
  Serial.println(distancia);
  delay(100);
}

