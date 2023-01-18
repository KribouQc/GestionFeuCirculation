const int feu1Vert = 2;
const int feu1Orange = 3;
const int feu1Rouge = 4;
const int feu2Vert = 5;
const int feu2Orange = 6;
const int feu2Rouge = 7;


void setup() {
  // put your setup code here, to run once:
  pinMode(feu1Vert, OUTPUT);
  pinMode(feu1Orange, OUTPUT);
  pinMode(feu1Rouge, OUTPUT);
  pinMode(feu2Vert, OUTPUT);
  pinMode(feu2Orange, OUTPUT);
  pinMode(feu2Rouge, OUTPUT);

  //init des leds
  digitalWrite(feu1Vert, LOW);
  digitalWrite(feu2Vert, HIGH);
  digitalWrite(feu1Orange, HIGH);
  digitalWrite(feu2Orange, HIGH);
  digitalWrite(feu1Rouge, HIGH);
  digitalWrite(feu2Rouge, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(feu1Rouge, HIGH);
  digitalWrite(feu1Vert, LOW);
  delay(3000);
  digitalWrite(feu1Vert, HIGH);
  digitalWrite(feu1Orange, LOW);
  delay(1000);
  digitalWrite(feu1Orange, HIGH);
  digitalWrite(feu1Rouge, LOW);
  delay(3000);

  digitalWrite(feu2Rouge, HIGH);
  digitalWrite(feu2Vert, LOW);
  delay(3000);
  digitalWrite(feu2Vert, HIGH);
  digitalWrite(feu2Orange, LOW);
  delay(1000);
  digitalWrite(feu2Orange, HIGH);
  digitalWrite(feu2Rouge, LOW);
  delay(3000);
}
