#include <LiquidCrystal.h> //on inclut la librairie
#define led 7
int cond = 0;
LiquidCrystal lcd(12,11,5,4,3,2);//rs,e,d4,d5,d6,d7

void setup() {
pinMode(led,OUTPUT);
Serial.begin(9600);
lcd.begin(16, 2);
}
void loop() {

if(Serial.available()>0)
{
  cond=Serial.read();
  
}

lcd.clear();
if(cond == 'A'){
    digitalWrite(led,HIGH);
    lcd.setCursor(0,0);
    lcd.print("Led ON");
} else if (cond == 'B'){
    
    digitalWrite(led,LOW);
    lcd.setCursor(0,0);
    lcd.print("Led OFF");
  }
delay(1000);
}
