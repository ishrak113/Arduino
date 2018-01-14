#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  delay(1000);
}

void loop() {
  // set the cursor to (0,0):
  lcd.setCursor(0, 0);
  lcd.print("Hello World!");
  
for (int positionCounter = 0; positionCounter < 12; positionCounter++) {
    // scroll one position left:
    lcd.scrollDisplayLeft();
    delay(500);
  }
lcd.clear();
  // set the cursor to (16,1):
  lcd.setCursor(16, 1);
   lcd.print("Hello World!");
 for (int positionCounter = 0; positionCounter < 12; positionCounter++){
  lcd.scrollDisplayLeft();
    delay(500);
  }
 lcd.clear();
  delay(100);
}
