int bt1 = 3 ;
int ledy = 8;
boolean etats = true;
void setup() {
  // put your setup code here, to run once:
  pinMode(bt1,INPUT);
  pinMode(ledy,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  boolean val1 = digitalRead(bt1);
  
  if(val1 == 1){
    etats = !etats;
    digitalWrite(ledy,etats);
  }

}
