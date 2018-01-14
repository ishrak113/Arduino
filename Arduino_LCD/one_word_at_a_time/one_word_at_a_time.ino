#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
char array1[] = {'I','s','h','r','a','k'};
char array2[] = {'A','h','m','e','d'};
void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
}

void loop() {
  // set the cursor to (0,0):
  lcd.setCursor(5, 0);
 
for (int i=0; i<6;i++){
    lcd.print(array1[i]);
    delay(500);
}

  // set the cursor to (16,1):
  lcd.setCursor(5, 1);
 
for (int i=0; i<5;i++){
    lcd.print(array2[i]);
    delay(500);
} 
lcd.clear();
}

