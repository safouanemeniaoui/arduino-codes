#define led 3
#define LDR A0
int val=0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(led,OUTPUT);
digitalWrite(led,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
val=analogRead(LDR);
Serial.println(val);
delay(15);
if(val <500){
  digitalWrite(led,HIGH);
}else{
  digitalWrite(led,LOW);
}
}
