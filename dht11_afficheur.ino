#include <LiquidCrystal.h> //on inclut la librairie
#include "DHT.h"
#define DHTPIN 7     // what digital pin we're connected to
#define DHTTYPE DHT11   // DHT 11
DHT dht(DHTPIN, DHTTYPE);
LiquidCrystal lcd(12,11,5,4,3,2);//rs,e,d4,d5,d6,d7
void setup() {
  Serial.begin(9600);
  Serial.println("DHTxx test!");
  dht.begin();
  lcd.begin(16, 2);
}

void loop() {
  lcd.clear();
  delay(2000);  
  float t = dht.readTemperature();
  
  // Check if any reads failed and exit early (to try again).
  if (isnan(t)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }
  
   lcd.setCursor(0,0);
   lcd.print("Temperature: ");
   lcd.setCursor(0,1);
   lcd.print(t); 
   lcd.print(" C");
}
