int pontos = 0;

#include <Adafruit_LiquidCrystal.h>

Adafruit_LiquidCrystal lcd(0);

#define BotA 2
#define BotB 3
#define BotC 4
#define BotD 5
  
int nQuestao = 10;
int array[10];
void setup(){
  pinMode(BotA, INPUT);
  pinMode(BotB, INPUT);
  pinMode(BotC, INPUT);
  pinMode(BotD, INPUT);
  
  lcd.begin(16, 2);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Seja Bem Vindo!");
  Serial.begin(9600);
  delay(2000);
  lcd.clear();
  geraSequencia();
}


void loop(){
  pontos = 0;
  for (int i = 0; i < nQuestao; i++){
    SelecionaQuestao(array[i]);
    Serial.println(pontos);
  }
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Pontuacao final: ");
  lcd.setCursor(0,1);
  lcd.print(pontos);
  delay(2000);
}



void SelecionaQuestao(int nQuestao){
  switch(nQuestao){
    case 0:
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print("raiz quadrda de 25 é:");
    
    	lcd.setCursor(0,1);
    	lcd.print("a)8 b)7 c)2 d)5");
        if(AnalisaBotao()=='D'){
          lcd.clear();
          lcd.setCursor(0,1);
          lcd.print("Correto!");
          delay(500);
          pontos =  pontos + 10;
        }else{
            lcd.clear();
          lcd.setCursor(0,1);
          lcd.print("Errado!");
         
            delay(500);
        }
    
    break;
    case 1:
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print("quantos dentes temos?");
    
    lcd.setCursor(0,1);
    	lcd.print("a)43 b)32 c)20 d)16");
        if(AnalisaBotao()=='B'){
          lcd.clear();     
          lcd.setCursor(0,1);
          lcd.print("Correto!");
          delay (500);
          pontos =  pontos + 10;
        }else{
          lcd.clear();
          lcd.setCursor(0,1);
          lcd.print("Errado!");
          
           delay(500);
        }
    break;
    case 2:
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print("O retrovisor seria");
        lcd.setCursor(0,1);
    	lcd.print("a)reto b)concavo c)convexo");
    if(AnalisaBotao()=='C'){
          lcd.clear();
         lcd.setCursor(0,1);
          lcd.print("Correto!");
          lcd.setCursor(0,1); 
          delay (500);
          pontos =  pontos + 10;
     
    	
    }else{
          lcd.clear();
          lcd.setCursor(0,1);
          lcd.print("Errado!");
          
            delay(500);
        }
    break;
    case 3:
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print("O maior osso humano:");
        lcd.setCursor(0,1);
    	lcd.print("a)etmoide b)femur");
        if(AnalisaBotao()=='B'){
         lcd.clear();
         lcd.setCursor(0,1);
          lcd.print("Correto!");
          delay (500);
          pontos =  pontos + 10;
        }else{
          lcd.clear();
          lcd.setCursor(0,1);
          lcd.print("Errado!");
         
           delay(500);
        }
    break;
    case 4:
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print("He significa Ferro");
        lcd.setCursor(0,1);
        lcd.print("a)Verdadeiro B)Falso");
        if(AnalisaBotao()=='B'){
           lcd.clear();
          lcd.setCursor(0,1);
          lcd.print("Correto!");
          delay (500);
          pontos =  pontos + 10;
        }else{
           lcd.clear();
          lcd.setCursor(0,1);
          lcd.print("Errado!");
         
             delay(500);
        }
    break;
    case 5:
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print("Karl Max era:");
        lcd.setCursor(0,1);
        lcd.print("a)Socialista b)neutro");
        if(AnalisaBotao()=='A'){
           lcd.clear();
          lcd.setCursor(0,1);
          lcd.print("Correto!");
          delay(500);
          pontos =  pontos + 10;
        }else{
          lcd.clear();
          lcd.setCursor(0,1);
          lcd.print("Errado!");
          
             delay(500);
        }
    break;
    case 6:
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print("Maior rio do mundo");
        lcd.setCursor(0,1);
        lcd.print("a)purus b)Ica c)nilo");
        if(AnalisaBotao()=='C'){
           lcd.clear();
          lcd.setCursor(0,1);
          lcd.print("Correto!");
          delay (500);
          lcd.clear();
          pontos =  pontos + 10;
        }else{
           lcd.clear();
          lcd.setCursor(0,1);
          lcd.print("Errado!");
         
           delay(500);
        }
    break;
    case 7:
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print("Quantos paises temos");
        lcd.setCursor(0,1);
        lcd.print("a)60 b)140 c)193");
        if(AnalisaBotao()=='C'){
           lcd.clear();
          lcd.setCursor(0,1);
          lcd.print("Correto!");
          delay (500);
          lcd.clear();
          pontos =  pontos + 10;
        }else{
          lcd.clear();
          lcd.setCursor(0,1);
          lcd.print("Errado!");
          
             delay(500);
        }
    break;
    case 8:
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print("Var significa:");
         lcd.setCursor(0,1);
        lcd.print("a)Variavel b)void");
        if(AnalisaBotao()=='A'){
          lcd.clear();
          lcd.setCursor(0,1);
          lcd.print("Correto!");
          delay (500);
          pontos =  pontos + 10;
        }else{
            lcd.clear();
          lcd.setCursor(0,1);
          lcd.print("Errado!");
             delay(500);
        
        }
    break;
    case 9:
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print("onde surgiu o covid");
        lcd.setCursor(0,1);
        lcd.print("a)Jap b)cn c)kor");
        if(AnalisaBotao()=='B'){
          lcd.clear();
          lcd.setCursor(0,1);
          lcd.print("Correto!");
          delay (500);
          pontos =  pontos + 10;
        }else{
           lcd.clear();
          lcd.setCursor(0,1);
          lcd.print("Errado!");
         delay(500);
         
        }
    break;
    
  }
}
char AnalisaBotao(){
  bool BotaoPressionado = true;
  while(BotaoPressionado){
    if(digitalRead(BotA)){
      BotaoPressionado = false;
      return 'A';
    }else if(digitalRead(BotB)){
      BotaoPressionado = false;
      return 'B';
    }else if(digitalRead(BotC)){
      BotaoPressionado = false;
      return 'C';
    }else if(digitalRead(BotD)){
      BotaoPressionado = false;
      return 'D';
    }
  }
}
void geraSequencia(){
  randomSeed(random(0, 1000));
  for (int i = 0; i < nQuestao; i++){     
    array[i] = i;
  }
  for (int i = 0; i < nQuestao; i++) {    
    int temp = array[i];
    int novoIndice = random(nQuestao);
    array[i] = array[novoIndice];
    array[novoIndice] = temp;
  }
}
