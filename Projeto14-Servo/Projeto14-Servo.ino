// Uso do Servo Motor SG90.

#include <Servo.h>
Servo servo;

int pinoPotenciometro = A0;
int pinoServoMotor = 6;
int valorPot;
int valorMotor = 0;

void setup() {
  servo.attach(pinoServoMotor);
  Serial.begin(9600);
}

void loop() {
  valorPot = analogRead(pinoPotenciometro);
  valorMotor = map(valorPot, 0, 1023, 0, 180);
  servo.write(valorMotor);
  Serial.println(valorMotor);
  delay(5000);
}

