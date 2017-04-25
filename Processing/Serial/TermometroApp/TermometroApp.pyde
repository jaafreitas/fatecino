add_library('serial')

temperatura = ""

def setup():
    size(300, 200)
    background(127)

    println("Termometro Digital")
    frame.setTitle ("Termometro Digital")

    porta = Serial(this, Serial.list()[0], 9600)
    porta.bufferUntil(0)

    textFont(createFont("Monospaced", 48))
    textAlign(CENTER, CENTER)

def draw():
    global temperatura
    if temperatura <> "":
        fill(0)
        ellipse(150, 110, 150, 100)
    
        fill(255);
        text(temperatura + "C", width/2, height/2)

def serialEvent(evt):
    global temperatura
    temperatura = evt.readString()