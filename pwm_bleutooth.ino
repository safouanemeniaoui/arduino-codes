#define led 3
int v = 0;
int value = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0){
     value = Serial.read();
    }
switch(value){
  case 'A' : {
    v++;
    Serial.println(v);
    analogWrite(led,v);
    delay(15);
    if(v>254) v=255;
    if(v< 1) v=0;
    value = '*';
  }
   break;
  case 'B' : {
    v--;
    Serial.println(v);
    analogWrite(led,v);
    delay(15);
    if(v >= 255) v = 255;
    if(v <= 0) v = 0;
    value = '*';
  }
    break;
}
}
