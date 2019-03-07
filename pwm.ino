#define led 3
int v=0;

void setup() {

Serial.begin(9600);
pinMode(led,OUTPUT);

}


void loop() {

  v=analogRead(A0);
  v=map(v,0,1023,0,255);
  analogWrite(led,v);
  delay(15);

}
