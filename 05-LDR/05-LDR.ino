#define LDR A0
#define RED 7
#define GREEN 6

void setup() {
  pinMode(LDR, INPUT);
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(LDR);
  Serial.println(value);
  if (value <= 970){
    digitalWrite(RED, LOW);
    digitalWrite(GREEN, HIGH);
  } else {
    digitalWrite(RED, HIGH);
    digitalWrite(GREEN, LOW);
  }
}
