#define pin_led1 8
#define pin_led2 9
#define pin_led3 10
#define pin_led4 11
#define pin_botaoA 2
#define pin_botaoB 3

int conta = 0;
int tic = 0;
int tic2 = 0;

void setup() {
  pinMode(pin_led1, OUTPUT);
  pinMode(pin_led2, OUTPUT);
  pinMode(pin_led3, OUTPUT);
  pinMode(pin_led4, OUTPUT);
  pinMode(pin_botaoA, INPUT);
  pinMode(pin_botaoB, INPUT);
  Serial.begin(9600);
}

void loop() {
  bool botaoA = digitalRead(pin_botaoA);
  bool botaoB = digitalRead(pin_botaoB);
  if ((botaoA == 1) && (tic == 0)) {
    conta += 1;
    tic += 1;
    tic2 = 0;
    Serial.println(conta);
  }
  if ((botaoA == 0)) {
    tic = 0;
  }
  if ((botaoB == 1) && (tic2 == 0)) {
    conta -= 1;
    tic2 += 1;
    tic = 0;
    Serial.println(conta);
  }
  if ((botaoB == 0)) {
    tic2 = 0;
  }
  if (conta == 0) {
    digitalWrite(pin_led1, HIGH);
    digitalWrite(pin_led2, LOW);
    tic2 += 1;
  } else {
    digitalWrite(pin_led1, LOW);
  }
  if (conta == 50) {
    digitalWrite(pin_led1, LOW);
    digitalWrite(pin_led2, HIGH);
    tic += 1;
  } else {
    digitalWrite(pin_led2, LOW);
  }
}