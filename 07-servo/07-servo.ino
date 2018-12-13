#include <Servo.h>
#define SERVO 6
#define POT A0

Servo s;
int pos;

void setup() {
  pinMode(POT, INPUT);
  s.attach(SERVO);
  Serial.begin(9600);
}

void loop() {
  int posPot = map(analogRead(POT), 0, 1024, 0, 180);
  Serial.println(posPot);
  s.write(posPot);
}
