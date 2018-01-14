
// digital pin 2 has a pushbutton attached to it. Give it a name:
int pushButton = 2;
int LED= 13;

// the setup routine runs once when you press reset:
void setup() {
 
  // make the pushbutton's pin an input:
  pinMode(pushButton, INPUT);
  pinMode(LED, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input pin:
  int buttonState = digitalRead(pushButton);
if (buttonState==HIGH)
 digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
else if (buttonState==LOW)
  digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
  
  delay(100);        // delay in between reads for stability
}
