//CODE NOT COMPLETED
int buttonPin1 = 2;
int buttonPin2 = 3;
int buttonPin3 = 4;
int buttonPin4 = 5;
int buttonState1 = 0;   
int buttonState2 = 0;   
void setup()
{
  pinMode(13, OUTPUT);  
  pinMode(12, OUTPUT); 
   pinMode(11, OUTPUT); 
    pinMode(10, OUTPUT); 
   pinMode(buttonPin1, INPUT);
    pinMode(buttonPin2, INPUT);
}

void loop()
{  buttonState1 = digitalRead(buttonPin1);
buttonState2 = digitalRead(buttonPin2);
   if (buttonState1 == HIGH)
 { digitalWrite(13, HIGH);  
      digitalWrite(11, HIGH); 
 }                
  else if (buttonState2 == HIGH) { 
    digitalWrite(12, HIGH); 
digitalWrite(10, HIGH);
    
  }              
}
