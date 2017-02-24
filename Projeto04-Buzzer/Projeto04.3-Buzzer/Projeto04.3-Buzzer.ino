// Notas musicais com buzzer

// Selecione o pino do Buzzer.
int buzzer = 9;

int numNotas = 10;

// vetor de inteiros com frequências diversas.
int notas[] = {261, 277, 294, 311, 330, 349, 370, 392, 415, 440};
// notas         C   C#    D   D#    E    F   F#    G   G#    A
/*
  C=Dó D=Ré E=Mi F=Fá G=Sol A=Lá B=Si
  As notas sem o “#”, são as notas naturais (fundamentais).
  Aquelas com o “#”, são chamadas “notas sustenidas” (por exemplo: C#=Dó Sustenido).
*/ 

void setup() {
  // Configura a comunicação serial.
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  for (int i = 0; i < numNotas; i++) {
    // Mostra a nota que será tocada.
    Serial.println(notas[i]);
    tone(buzzer, notas[i], 500);
    delay(1000);
  }
}

