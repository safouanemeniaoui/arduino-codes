#define led 3
#define btn1 7
#define btn2 8
int v=0;

void setup() {

Serial.begin(9600);
pinMode(led,OUTPUT);
pinMode(btn1,INPUT);
pinMode(btn2,INPUT);

}

void loop() {

boolean valeur1= digitalRead(btn1);
boolean valeur2= digitalRead(btn2);

while(valeur1){
v++;
delay(15);
Serial.println(v);
break;
}
while(valeur2){
v--;
delay(15);
Serial.println(v);
break;
}

if(v>= 255) v=255;
if(v<0) v=0;
Serial.println(v);
analogWrite(led,v);
delay(15);

}
