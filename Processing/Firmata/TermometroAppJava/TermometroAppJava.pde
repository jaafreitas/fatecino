import processing.serial.*;
import cc.arduino.*;
import org.firmata.*;

Arduino arduino;

String temperatura = "";
// Pino com o valor da temperatura.
int pinoTemperatura = 0;

void setup() {
  size(300, 200);
  background(127);

  println("Termometro Digital");
  surface.setTitle ("Termometro Digital");
  
  arduino = new Arduino(this, Arduino.list()[0], 57600);

  textFont(createFont("Monospaced", 48));
  textAlign(CENTER, CENTER);
}

void draw() {    
  temperatura = Integer.toString(arduino.analogRead(pinoTemperatura));
  if (temperatura != null) {
    fill(0);
    ellipse(150, 110, 150, 100);

    fill(255);
    text(temperatura + "C", width/2, height/2);
  }
}