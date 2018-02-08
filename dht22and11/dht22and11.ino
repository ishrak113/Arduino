#include <DHT.h> 
#define DHTPIN D1    
#define DHTPIN1 D5 //pin where the dht11 is connected
 DHT dht(DHTPIN, DHT11);
  DHT dht1(DHTPIN1, DHT22);
void setup(){
  dht.begin();
   dht1.begin();
  Serial.begin(115200);
}
void loop(){

float t = dht.readTemperature();        
float t1 = dht1.readTemperature();  
    Serial.print("temperature = ");
    Serial.print(t); 
    Serial.println("C  ");
   
    
      Serial.print("temperature = ");
    Serial.print(t1); 
    Serial.println("C  ");
  
    
    
  delay(5000);
}
