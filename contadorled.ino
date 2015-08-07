int botao = 12;
int atual = 0;
             //2,3,4,5,6,7,8,9
int num1[8] = {0,1,1,0,0,0,0,0};
int num2[8] = {0,0,1,1,1,1,0,1};

int num8[8] = {0,0,1,1,1,1,1,0};
void setup(){
  pinMode(botao,INPUT);
  for(int i = 2; i < 10; i++){
    pinMode(i,OUTPUT);
    digitalWrite(i,LOW);
    }

    acendeZero();
  }

void loop(){
  
 acendeZero();
 acendeUm();
 acendeDois();
 acendeTres();
 acendeQuatro();
 acendeCinco();
 acendeSeis();
 acendeSete();
 acendeOito();
 acendeNove();
     
      
      
    
    

  }
 void apagaTudo(){
   delay(1000);
      for(int i = 2; i < 10; i++){
        digitalWrite(i,LOW);
        }

     
    }

void acendeUm(){
for(int i = 0; i <= 7; i++)
  digitalWrite(i+2,num1[i]);
  
  }

  
void acendeDois(){
   apagaTudo();
   digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
   digitalWrite(8,HIGH);

  //for(int i = 0; i <= 7; i++)
  //digitalWrite(i+2,num2[i]);

  
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
  
