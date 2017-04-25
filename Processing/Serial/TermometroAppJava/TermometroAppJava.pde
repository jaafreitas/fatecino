import processing.serial.*;

Serial porta;

String temperatura = "";

void setup() {
  size(300, 200);
  background(127);

  println("Termometro Digital");
  surface.setTitle ("Termometro Digital");

  porta = new Serial(this, Serial.list()[0], 9600);

  textFont(createFont("Monospaced", 48));
  textAlign(CENTER, CENTER);
}

void draw() {
  temperatura = porta.readStringUntil(0);
  if (temperatura != null) {
    fill(0);
    ellipse(150, 110, 150, 100);

    fill(255);
    text(temperatura + "C", width/2, height/2);
  }
}