add_library('serial')

temperatura = "";

def setup():
    size(300, 200)
    background(0)

    println("Termometro Digital");
    frame.setTitle ("Termometro Digital")

    println(Serial.list());
    porta = Serial(this, Serial.list()[0], 9600);
    porta.bufferUntil(0)

    font = createFont("Monospaced", 48)
    textFont(font)
    textAlign(CENTER, CENTER)

def draw():
    background(127)

    fill(0)
    ellipse(150, 110, 150, 100)

    global temperatura
    if temperatura <> "":
        fill(255);
        text(temperatura + "C", width/2, height/2)

def serialEvent(evt):
    global temperatura
    temperatura = evt.readString()
