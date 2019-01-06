#include <LiquidCrystal.h>
#define PIR 13
#define DELAY_PIR 500
LiquidCrystal lcd(2, 4, 9, 10, 11, 12);

void setup() {
  pinMode(PIR, INPUT);
  lcd.begin(16, 2);
}

void loop() {
  if (digitalRead(PIR) == 1) {
    printMessage("O.O","tem gente!!!");
    delay(DELAY_PIR);
  } else {
    printMessage("-_-","zzzZZZzzz...");
    delay(DELAY_PIR);
  }
}

void printMessage(String smile, String message) {
  lcd.clear();
  lcd.print(smile);
  lcd.setCursor(0, 1);
  lcd.print(message);
}
