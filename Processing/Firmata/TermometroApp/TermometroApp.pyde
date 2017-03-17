add_library('serial')
add_library('arduino')

temperatura = "";
# Pino com o valor da temperatura.
pinoTemperatura = 0   

def setup():
    size(300, 200)
    background(0)

    println("Termometro Digital");
    frame.setTitle ("Termometro Digital")
    
    global arduino
    println(Arduino.list())
    arduino = Arduino(this, Arduino.list()[0], 57600) # objeto Arduino

    font = createFont("Monospaced", 48)
    textFont(font)
    textAlign(CENTER, CENTER)    

def draw():
    background(127)
    
    fill(0)
    ellipse(150, 110, 150, 100)

    global temperatura
    global arduino
    temperatura = str(arduino.analogRead(pinoTemperatura))
    if temperatura <> "":
        fill(255);
        text(temperatura + "C", width/2, height/2)