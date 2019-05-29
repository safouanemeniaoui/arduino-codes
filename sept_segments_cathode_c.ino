/* Cathode commun
0v
*/

int A = 4;
int B = 5;
int C = 8;
int D = 7;
int E = 6;
int F = 3;
int G = 2;

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
           digitalWrite(A, HIGH); 
           digitalWrite(B, HIGH); 
           digitalWrite(C, HIGH); 
           digitalWrite(D, HIGH); 
           digitalWrite(E, HIGH); 
          digitalWrite(F, HIGH);
     }
       break; 
        case 1 : {
           digitalWrite(B, HIGH); 
           digitalWrite(C, HIGH); }
           break; 
        case 2 : {
           digitalWrite(A, HIGH); 
           digitalWrite(B, HIGH); 
           digitalWrite(G, HIGH); 
           digitalWrite(E, HIGH);
          digitalWrite(D, HIGH);
        }
           break; 
        case 3 : {
           digitalWrite(A, HIGH); 
           digitalWrite(B, HIGH); 
           digitalWrite(C, HIGH); 
           digitalWrite(D, HIGH); 
           digitalWrite(G, HIGH); }
           break ; 
        case 4 : {
           digitalWrite(F, HIGH); 
           digitalWrite(G, HIGH); 
           digitalWrite(B, HIGH); 
           digitalWrite(C, HIGH); }
       break ; 
        case 5 : {
           digitalWrite(A, HIGH); 
           digitalWrite(F, HIGH); 
           digitalWrite(G, HIGH); 
           digitalWrite(C, HIGH); 
           digitalWrite(D, HIGH); }
           break ; 
        case 6 : {
           digitalWrite(D, HIGH); 
           digitalWrite(F, HIGH); 
           digitalWrite(G, HIGH); 
           digitalWrite(A, HIGH); 
           digitalWrite(C, HIGH); 
        digitalWrite(E, HIGH);
        }
           break ; 
        case 7 : {
           digitalWrite(A, HIGH); 
           digitalWrite(B, HIGH); 
           digitalWrite(C, HIGH); }
           break ; 
        case 8 : {
           digitalWrite(A, HIGH); 
           digitalWrite(B, HIGH); 
           digitalWrite(C, HIGH); 
           digitalWrite(D, HIGH); 
           digitalWrite(E, HIGH); 
           digitalWrite(F, HIGH); 
          digitalWrite(G, HIGH); 
        }
           break ; 
        case 9 : {
           digitalWrite(A, HIGH); 
           digitalWrite(B, HIGH); 
           digitalWrite(C, HIGH); 
           digitalWrite(D, HIGH); 
           digitalWrite(F, HIGH); 
           digitalWrite(G, HIGH); }
           break ; 
       } 
}

void eteindre()  { 
           digitalWrite(D, LOW); 
           digitalWrite(E, LOW); 
           digitalWrite(F, LOW); 
           digitalWrite(G, LOW); 
           digitalWrite(A, LOW); 
           digitalWrite(B, LOW); 
           digitalWrite(C, LOW); 
}
