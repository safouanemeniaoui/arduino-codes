int bt1 = 3 ;
int bt2 = 4 ;
int ledr = 8;
void setup() {
  // put your setup code here, to run once:
  pinMode(bt1,INPUT);
  pinMode(bt2,INPUT);
  pinMode(ledr,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  boolean val1 = digitalRead(bt1);
  boolean val2 = digitalRead(bt2);
  if(val1 == 1){
    digitalWrite(ledr,HIGH);
  }
  else if( val2 == 1){

    digitalWrite(ledr,LOW);
  }

}
