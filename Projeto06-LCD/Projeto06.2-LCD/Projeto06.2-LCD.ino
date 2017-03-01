// Rolagem (scroll) do texto

// Library Manager -> Adafruit LiquidCrystal by Adafruit.
// https://github.com/adafruit/Adafruit_LiquidCrystal
#include <Adafruit_LiquidCrystal.h>

// Os pinos para conexão do LCD podem variar de acordo com o modelo do Arduino.
// SDA A4
// SCL A5

// Endereço encontrado utilizando o http://playground.arduino.cc/Main/I2cScanner
Adafruit_LiquidCrystal lcd(0x20);

int inicio = 0;
int tamanho = 1;
boolean alterar = false;

void setup() {
  // Inicia o LCD com dimensões 16x2 (Colunas x Linhas)
  lcd.begin(16, 2);
}

void loop() {
  // Limpa o display LCD.
  lcd.clear();

  String texto = "FATECINO - Clube de Arduino da Fatec";
  if (tamanho < 16) {
    // Posiciona o cursor na coordenada especificada
    lcd.setCursor(16 - tamanho, 0);
    lcd.print(texto.substring(inicio, tamanho));
    tamanho++;
  }
  else {
    if (!alterar) {
      alterar = !alterar;
      tamanho = 16;
      lcd.setCursor(0, 0);
    }
    lcd.print(texto.substring(inicio, inicio + tamanho));
    inicio++;
  }
  if (inicio > texto.length()) {
    inicio = 0;
    tamanho = 1;
    alterar = !alterar;
  }
  delay(500);
}

