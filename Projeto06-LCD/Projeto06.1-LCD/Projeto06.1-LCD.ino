// Exibição simples de texto

// Library Manager -> Adafruit LiquidCrystal by Adafruit.
// https://github.com/adafruit/Adafruit_LiquidCrystal
#include <Adafruit_LiquidCrystal.h>

// Os pinos para conexão do LCD podem variar de acordo com o modelo do Arduino.
// SDA A4
// SCL A5

// Endereço encontrado utilizando o http://playground.arduino.cc/Main/I2cScanner
Adafruit_LiquidCrystal lcd(0x20);

void setup() {
  // Inicia o LCD com dimensões 16x2 (Colunas x Linhas)
  lcd.begin(16, 2);
  lcd.print("Ola, FATECINO");
}

void loop() {
  // Linha 1 e Coluna 0.
  lcd.setCursor(0, 1);

  // Escreve os segundos desde o Arduino foi ligado.
  lcd.print(millis()/1000);

  // Acende a luz de fundo.
  lcd.setBacklight(HIGH);
  delay(500);

  // Apaga a luz de fundo.
  lcd.setBacklight(LOW);
  delay(500);
}

