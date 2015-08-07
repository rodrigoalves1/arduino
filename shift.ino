int data = 2;
int clok = 3;
int latch = 4;
int num1[8] = {0,1,1,1,1,1,1,1};
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
acendeUm();

}

void apagaTudo(){
  /* delay(100);
      for(int i = 2; i < 10; i++){
        digitalWrite(i,LOW);
        }*/

        delay(10);
       

     
    }

void acendeUm(){
 //apagaTudo();
//  digitalWrite(3,HIGH);
 // digitalWrite(4,HIGH);

   digitalWrite(latch,LOW);

        for(int i = 0; i<= 7;i++){
          digitalWrite(clok,LOW);
          digitalWrite(data,num1[i]);
          digitalWrite(clok,HIGH); 
          delay(10);
        
          }
          digitalWrite(latch,HIGH);
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
