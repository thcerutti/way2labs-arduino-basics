#define PINO 9

void setup() {
  TCCR1B = TCCR1B & 0b11111000 | 0X01;
  pinMode(PINO, OUTPUT);

}

void loop() {
  digitalWrite(PINO, 220);
}
