int tamanho = 1;

void setup() {
  // Define o tamanho da tela.
  size(400, 400);
  
  // Pinta de preto a tela.
  background(0);
}

void draw() {
  // Escolhe aleatoriamente a cor do pincel.
  fill(random(255), random(255), random(255), random(255));
  
  // Desenha elipses apenas no canto inferior direito,
  // do contrário desenha quadrados.
  if (mouseX > 200 && mouseY > 200) {
     ellipse(mouseX, mouseY, tamanho, tamanho);
  }
  else {      
    rect(mouseX, mouseY, tamanho, tamanho/2);
  }
  
  // Faz o tamanho aumentar com o tempo, até atingir o 
  // valor máximo para então voltar ao tamanho inicial.
  tamanho = tamanho + 1;
  if (tamanho > 100) {
    tamanho = 1;
  }
  
  // Escreve um texto em branco, com letra em tamanho 48,
  // alinhado horizontalmente e verticalmente ao centro.
  textSize(48);
  textAlign(CENTER, CENTER);
  fill(255);
  text("Olá", width/2, height/2);
}