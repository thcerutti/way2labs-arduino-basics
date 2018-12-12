#define PIR 2
#define LED 3

void setup() {
  pinMode(PIR, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  int temAlguemEmCasa = digitalRead(PIR);
  digitalWrite(LED, temAlguemEmCasa);
}
