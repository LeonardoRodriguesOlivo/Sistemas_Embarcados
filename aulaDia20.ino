#define pin_led1 8
#define pin_led2 9
#define pin_led3 10
#define pin_led4 11
#define pin_botao 2
#define pin_botao2 
//Define os nomes dos pinos
void setup() {
  // put your setup code here, to run once:
  //Serial.begin(9600);
  pinMode(pin_led1, OUTPUT);
  pinMode(pin_led2, OUTPUT);
  pinMode(pin_led3, OUTPUT);
  pinMode(pin_led4, OUTPUT);
  pinMode(pin_botao, INPUT);
  pinMode(pin_botao2, INPUT);
}
//pinMode serve para definir que os pinos são saídas
void loop() {
  //ATIVIDADE4
  bool estado = digitalRead(pin_botao);
  bool estado = digitalRead(pin_botao2);
  if (estado==1){
    digitalWrite(pin_led1, HIGH);
    digitalWrite(pin_led2, HIGH);
  } else {
    digitalWrite(pin_led1, LOW);
    digitalWrite(pin_led2, LOW);
  }
  //ATIVIDADE3
  //bool estado = digitalRead(pin_botao);
  //if (estado==1){
    //digitalWrite(pin_led1, HIGH);
    //digitalWrite(pin_led3, HIGH);
    //digitalWrite(pin_led2, LOW);
    //digitalWrite(pin_led4, LOW);
  //} else {
    //digitalWrite(pin_led2, HIGH);
    //digitalWrite(pin_led4, HIGH);
    //digitalWrite(pin_led1, LOW);
    //digitalWrite(pin_led3, LOW);
  //}
  // put your main code here, to run repeatedly:
  //if (Serial.available() == 1) {
    //char i = Serial.read();
    //Serial.println(i);
  //}
  //Serial.println("Liga LED");
  //digitalWrite(pin_led1, HIGH);
  //digitalWrite(pin_led2, HIGH);
  //digitalWrite(pin_led3, HIGH);
  //digitalWrite(pin_led4, HIGH);
  //Serial.println("Desliga LED");
  //delay(1000);
  //o comando delay serve para por uma pausa entre os comandos.
  //digitalWrite(pin_led1, LOW);
  //digitalWrite(pin_led2, LOW);
  //digitalWrite(pin_led3, LOW);
  //digitalWrite(pin_led4, LOW);
  //delay(1000);
  //digitalWrite serve para enviar a informação de que o led precisa ligar(HIGH) ou desligar(LOW)
}
