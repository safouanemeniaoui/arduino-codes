/* Anode commun
5v
*/

int A = 2;
int B = 3;
int C = 4;
int D = 5;
int E = 6;
int F = 7;
int G = 8;

void setup(){ 
   pinMode(A, OUTPUT); 
   pinMode(B, OUTPUT); 
   pinMode(C, OUTPUT); 
   pinMode(D, OUTPUT); 
   pinMode(E, OUTPUT); 
   pinMode(F, OUTPUT); 
   pinMode(G, OUTPUT);  
   Serial.begin(9600); 
   eteindre();
} 

void loop() { 
   for (int i = 0 ; i < 10 ; i++){
         afficher(i);
      Serial.println(i);
        delay(1000);
      eteindre();
    } 
} 
void afficher( int val ) { 
   switch (val){ 
     case 0 : {
           digitalWrite(A, LOW); 
           digitalWrite(B, LOW); 
           digitalWrite(C, LOW); 
           digitalWrite(D, LOW); 
           digitalWrite(E, LOW); 
          digitalWrite(F, LOW);
     }
       break; 
        case 1 : {
           digitalWrite(B, LOW); 
           digitalWrite(C, LOW); }
           break; 
        case 2 : {
           digitalWrite(A, LOW); 
           digitalWrite(B, LOW); 
           digitalWrite(G, LOW); 
           digitalWrite(E, LOW);
          digitalWrite(D, LOW);
        }
           break; 
        case 3 : {
           digitalWrite(A, LOW); 
           digitalWrite(B, LOW); 
           digitalWrite(C, LOW); 
           digitalWrite(D, LOW); 
           digitalWrite(G, LOW); }
           break ; 
        case 4 : {
           digitalWrite(F, LOW); 
           digitalWrite(G, LOW); 
           digitalWrite(B, LOW); 
           digitalWrite(C, LOW); }
       break ; 
        case 5 : {
           digitalWrite(A, LOW); 
           digitalWrite(F, LOW); 
           digitalWrite(G, LOW); 
           digitalWrite(C, LOW); 
           digitalWrite(D, LOW); }
           break ; 
        case 6 : {
           digitalWrite(D, LOW); 
           digitalWrite(F, LOW); 
           digitalWrite(G, LOW); 
           digitalWrite(A, LOW); 
           digitalWrite(C, LOW); 
        digitalWrite(E, LOW);
        }
           break ; 
        case 7 : {
           digitalWrite(A, LOW); 
           digitalWrite(B, LOW); 
           digitalWrite(C, LOW); }
           break ; 
        case 8 : {
           digitalWrite(A, LOW); 
           digitalWrite(B, LOW); 
           digitalWrite(C, LOW); 
           digitalWrite(D, LOW); 
           digitalWrite(E, LOW); 
           digitalWrite(F, LOW); 
          digitalWrite(G, LOW); 
        }
           break ; 
        case 9 : {
           digitalWrite(A, LOW); 
           digitalWrite(B, LOW); 
           digitalWrite(C, LOW); 
           digitalWrite(D, LOW); 
           digitalWrite(F, LOW); 
           digitalWrite(G, LOW); }
           break ; 
       } 
}

void eteindre()  { 
           digitalWrite(D, HIGH); 
           digitalWrite(E, HIGH); 
           digitalWrite(F, HIGH); 
           digitalWrite(G, HIGH); 
           digitalWrite(A, HIGH); 
           digitalWrite(B, HIGH); 
           digitalWrite(C, HIGH); 
}
