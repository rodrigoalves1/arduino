int botao = 12;
int atual = 0;
void setup(){
  pinMode(botao,INPUT);
  for(int i = 2; i < 10; i++){
    pinMode(i,OUTPUT);
    digitalWrite(i,LOW);
    }

    acendeZero();
  }

void loop(){
  

  int estado = digitalRead(botao);

  if(estado == 1){

    if(atual==0){
    acendeUm();
    atual++;
    }
    else if(atual == 1){
    acendeDois();
    atual++;
    }else if(atual == 2){
      acendeTres();
      atual++;
      }
      else if(atual == 3){
      acendeQuatro();
      atual++;
      }
      else if(atual == 4){
      acendeCinco();
      atual++;
      }
      else if(atual == 5){
      acendeSeis();
      atual++;
      }
      else if(atual == 6){
      acendeSete();
      atual++;
      }
      else if(atual == 7){
      acendeOito();
      atual++;
      }
      else if(atual == 8){
      acendeNove();
      atual++;
      }
      else if(atual == 9){
      acendeZero();
      atual = 0;
      }
      
    
    }
 delay(100);
  }
 void apagaTudo(){
   delay(100);
      for(int i = 2; i < 10; i++){
        digitalWrite(i,LOW);
        }

     
    }

void acendeUm(){
 apagaTudo();
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  
  }

  
void acendeDois(){
   apagaTudo();
  digitalWrite(5,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
  }


void acendeTres(){
   apagaTudo();
  digitalWrite(5,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(6,HIGH);
  }  

void acendeQuatro(){
   apagaTudo();
  digitalWrite(9,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  } 

  void acendeCinco(){
   apagaTudo();
  digitalWrite(5,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(6,HIGH);
  
  } 

  void acendeSeis(){
   apagaTudo();
  digitalWrite(5,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(3,HIGH);
  } 

  void acendeSete(){
   apagaTudo();
  digitalWrite(5,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  } 

  void acendeOito(){
   apagaTudo();

  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  } 

  void acendeNove(){
   apagaTudo();
  
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  } 

void acendeZero(){
   apagaTudo();

  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(9,HIGH);
  } 
  
