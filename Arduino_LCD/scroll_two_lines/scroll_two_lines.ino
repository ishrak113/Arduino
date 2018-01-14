

// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  //lcd.print("hello, world!");
  delay(100);
}

void loop() {
  // scroll 13 positions (string length) to the left
  // to move it offscreen left:
  lcd.print("hello, world!");
  for (int positionCounter = 0; positionCounter < 12; positionCounter++) {
    // scroll one position left:
    lcd.scrollDisplayLeft();
    // wait a bit:
    delay(70);
  }

  // scroll 29 positions (string length + display length) to the right
  // to move it offscreen right:
  /*for (int positionCounter = 0; positionCounter < 29; positionCounter++) {
    // scroll one position right:
    lcd.scrollDisplayRight();
    // wait a bit:
    delay(70);
  }*/
  
  lcd.clear();
  
  lcd.setCursor(16,1);
  lcd.print("hello, world!");
  // scroll 13 positions (string length) to the left
  // to move it offscreen left:
  for (int positionCounter = 0; positionCounter < 29; positionCounter++) {
    // scroll one position left:
    lcd.scrollDisplayLeft();
    // wait a bit:
    delay(70);
  }
  lcd.clear();
  // scroll 29 positions (string length + display length) to the right
  // to move it offscreen right:
  /*for (int positionCounter = 0; positionCounter < 29; positionCounter++) {
    // scroll one position right:
    lcd.scrollDisplayRight();
    // wait a bit:
    delay(70);
  }*/
  //lcd.clear();
  // delay at the end of the full loop:
  delay(100);

}

