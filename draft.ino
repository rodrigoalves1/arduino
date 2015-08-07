/*
Curso de Férias Arduino Básico - Arduinolandia
Projeto: Acender e apagar led através de um botão
*/
int portSpeak(13);
// Declaração das variaveis do código
//int led = 9;   // Refere-se ao pino que vai ser usado.
int botao1 = 2;  // Pino do botão 
int botao2 = 4;  // Pino do botão 
int botao3 = 6;  // Pino do botão 
// Estado do botão (Preessionado ou não)
int estado = 0;  

//Bloco de setup, executado ao ligar o Arduino.
void setup() {
  //pinMode(led,OUTPUT);   // Define o pino 13 como saída.
  pinMode(botao1,INPUT); 
   pinMode(botao2,INPUT);
    pinMode(botao3,INPUT);// O botão é uma "entrada" de dado
  Serial.begin(9600);
}

void loop() {
  // Lê o pino 12 e verifica o sinal.
int  estado1 = digitalRead(botao1);
int  estado2 = digitalRead(botao2);
int  estado3 = digitalRead(botao3);
    
  Serial.println("estado 1 = " + estado1);
  Serial.println("estado 2 = " + estado2);
  Serial.println("estado 3 = " + estado3);
  
 /* if(estado1 == 1) { // Se estiver pressionado
   tone(portSpeak,600,1000                                                      );
  delay(1000);
  }
  else {
    noTone(portSpeak);
  }*/
  delay(1000);
}
