#include <LiquidCrystal.h> //on inclut la librairie
#define redled 7
#define greenled 8
const int trigPin = 2;
const int echoPin = 3;
int temps = 100;
int test = 10;
long duration;
int distance;
LiquidCrystal lcd(12,11,10,9,5,4);//rs,e,d4,d5,d6,d7

void setup() {
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
pinMode(redled, OUTPUT); 
pinMode(greenled, OUTPUT);
Serial.begin(9600); // Starts the serial communication
lcd.begin(16, 2);
}
void loop() {
// Clears the trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);
// Calculating the distance
distance= duration*0.034/2;
// Prints the distance on lcd
   lcd.clear();
   lcd.setCursor(0,0);
   lcd.print("d = ");
   lcd.print(distance); 
   lcd.print(" cm");
if (distance > test ){
  digitalWrite(redled,LOW);
  digitalWrite(greenled,HIGH);
  lcd.setCursor(0,1);
  lcd.print("No danger");
}else {
  digitalWrite(redled,HIGH);
  digitalWrite(greenled,LOW);
  lcd.setCursor(0,1);
  lcd.print("Danger");
}
delay(temps);
}
