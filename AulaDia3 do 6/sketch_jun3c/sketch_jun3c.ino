#define pin_botaoA 2
#define pin_botaoB 3
int conta = 0;
int tic = 0;
int ticB = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(pin_botaoA, INPUT);
  pinMode(pin_botaoB, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  bool botaoA = digitalRead(pin_botaoA);
  bool botaoB = digitalRead(pin_botaoB);
  if (botaoA == 1) {
    if (tic == 0) {
      conta++;
      tic = 1;
      Serial.println(conta);
    }
  } else {
    tic = 0;
  }
  if (botaoB == 1) {
    if (ticB == 0) {
      conta--;
      ticB = 1;
      Serial.println(conta);
    }
  } else {
    ticB = 0;
  }
}