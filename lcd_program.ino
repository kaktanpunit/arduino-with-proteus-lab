#include <LiquidCrystal.h>
LiquidCrystal lcd(13,12,11,10,9,8);
void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
lcd.setCursor(0,0);
lcd.print("HELLO WORLD");
lcd.setCursor(0,1);
lcd.print("GOOD MORNING");
}
