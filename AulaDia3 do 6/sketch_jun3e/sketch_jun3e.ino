#define pin_led1 8
#define pin_led2 9
#define pin_led3 10
#define pin_led4 11
#define pin_botao1 2
#define pin_botao2 3

int cont = 0;
int tic1 = 0;
int tic2 = 0;
void setup() {
  pinMode(pin_led1, OUTPUT);
  pinMode(pin_led2, OUTPUT);
  pinMode(pin_led3, OUTPUT);
  pinMode(pin_led4, OUTPUT);
  pinMode(pin_botao1, INPUT);
  pinMode(pin_botao2, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  bool botaoA = digitalRead(pin_botao1);
  bool botaoB = digitalRead(pin_botao2);


if (botaoA == 1 && tic1 == 0 && cont<15) {
    cont += 1;
    tic1 += 1;
 }  
if (botaoA == 0) {
    tic1 = 0;
}
    
if (botaoB == 1 && tic2 == 0 && cont>0) {
    cont -= 1;
    tic2 += 1;
 } 
if (botaoB == 0) {
    tic2 = 0;
}
 
  if (cont == 0){
  digitalWrite(pin_led1,  LOW);
  digitalWrite(pin_led2,  LOW);
  digitalWrite(pin_led3,  LOW);
  digitalWrite(pin_led4,  LOW);
  }
   if (cont == 1){
  digitalWrite(pin_led1,  HIGH);
  digitalWrite(pin_led2,  LOW);
  digitalWrite(pin_led3,  LOW);
  digitalWrite(pin_led4,  LOW);
  }
  if (cont == 2){
  digitalWrite(pin_led1,  LOW);
  digitalWrite(pin_led2,  HIGH);
  digitalWrite(pin_led3,  LOW);
  digitalWrite(pin_led4,  LOW);
  }
  if (cont == 3){
  digitalWrite(pin_led1,  HIGH);
  digitalWrite(pin_led2,  HIGH);
  digitalWrite(pin_led3,  LOW);
  digitalWrite(pin_led4,  LOW);
  }
  if (cont == 4){
  digitalWrite(pin_led1,  LOW);
  digitalWrite(pin_led2,  LOW);
  digitalWrite(pin_led3,  HIGH);
  digitalWrite(pin_led4,  LOW);
  }
  if (cont == 5){
  digitalWrite(pin_led1,  HIGH);
  digitalWrite(pin_led2,  LOW);
  digitalWrite(pin_led3,  HIGH);
  digitalWrite(pin_led4,  LOW);
  }
  if (cont == 6){
  digitalWrite(pin_led1,  LOW);
  digitalWrite(pin_led2,  HIGH);
  digitalWrite(pin_led3,  HIGH);
  digitalWrite(pin_led4,  LOW);
  }  
  if (cont == 7){
  digitalWrite(pin_led1,  HIGH);
  digitalWrite(pin_led2,  HIGH);
  digitalWrite(pin_led3,  HIGH);
  digitalWrite(pin_led4,  LOW);
  }    
  if (cont == 8){
  digitalWrite(pin_led1,  LOW);
  digitalWrite(pin_led2,  LOW);
  digitalWrite(pin_led3,  LOW);
  digitalWrite(pin_led4,  HIGH);
  }  
  if (cont == 9){
  digitalWrite(pin_led1,  HIGH);
  digitalWrite(pin_led2,  LOW);
  digitalWrite(pin_led3,  LOW);
  digitalWrite(pin_led4,  HIGH);
  }    
  if (cont == 10){
  digitalWrite(pin_led1,  LOW);
  digitalWrite(pin_led2,  HIGH);
  digitalWrite(pin_led3,  LOW);
  digitalWrite(pin_led4,  HIGH);
  }    
  if (cont == 11){
  digitalWrite(pin_led1,  HIGH);
  digitalWrite(pin_led2,  HIGH);
  digitalWrite(pin_led3,  LOW);
  digitalWrite(pin_led4,  HIGH);
  }        
  if (cont == 12){
  digitalWrite(pin_led1,  LOW);
  digitalWrite(pin_led2,  LOW);
  digitalWrite(pin_led3,  HIGH);
  digitalWrite(pin_led4,  HIGH);
  }   
  if (cont == 13){
  digitalWrite(pin_led1,  HIGH);
  digitalWrite(pin_led2,  LOW);
  digitalWrite(pin_led3,  HIGH);
  digitalWrite(pin_led4,  HIGH);
  }    
  if (cont == 14){
  digitalWrite(pin_led1,  LOW);
  digitalWrite(pin_led2,  HIGH);
  digitalWrite(pin_led3,  HIGH);
  digitalWrite(pin_led4,  HIGH);
  }    
  if (cont == 15){
  digitalWrite(pin_led1,  HIGH);
  digitalWrite(pin_led2,  HIGH);
  digitalWrite(pin_led3,  HIGH);
  digitalWrite(pin_led4,  HIGH);
  }    
  
}