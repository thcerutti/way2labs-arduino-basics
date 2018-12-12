#define RED 12
#define GREEN 11

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  Serial.begin(9600);
}

int vRed = LOW;
int vGreen = LOW;

void loop() {
  String value = Serial.readString();
  Serial.println(value);
  if (value == "RED") {
    vRed = HIGH;
    vGreen = LOW;
  }  else if (value == "GREEN") {
    vRed = LOW;
    vGreen = HIGH;
  }
  Serial.print("RED:");
  Serial.print(vRed);
  Serial.print("GREEN:");
  Serial.print(vGreen);
  Serial.println();

  digitalWrite(RED, vRed);
  digitalWrite(GREEN, vGreen);
}
