#define BTN 13
#define LED 2

void setup() {
  pinMode(BTN, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600); // rate - bits per second
}

void loop() {
  int posicao = digitalRead(BTN);
  Serial.println(posicao);
  digitalWrite(LED, posicao);
}
