#define RED 11
#define GREEN 10
#define BLUE 6
#define POT A0

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  pinMode(POT, INPUT);
  Serial.begin(9600);
}

void loop() {
  int value = map(analogRead(POT), 0, 1024, 0, 255);
  analogWrite(RED, 0);
  analogWrite(GREEN, value);
  analogWrite(BLUE, 0);
  Serial.println(value);
}
