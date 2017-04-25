add_library('serial')
add_library('arduino')

temperatura = ""
# Pino com o valor da temperatura.
pinoTemperatura = 0   

def setup():
    size(300, 200)
    background(127)

    println("Termometro Digital");
    frame.setTitle ("Termometro Digital")
    
    global arduino
    arduino = Arduino(this, Arduino.list()[0], 57600) # objeto Arduino

    textFont(createFont("Monospaced", 48))
    textAlign(CENTER, CENTER)    

def draw():
    global temperatura
    global arduino
    temperatura = str(arduino.analogRead(pinoTemperatura))
    if temperatura <> "":
        fill(0)
        ellipse(150, 110, 150, 100)
    
        fill(255)
        text(temperatura + "C", width/2, height/2)