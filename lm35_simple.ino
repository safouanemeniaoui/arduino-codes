
void setup() {
  Serial.begin(9600);
}
void loop() {
  
  // Mesure la tension sur la broche A0
  int valeur_brute = analogRead(A0);
  
  // Transforme la mesure (nombre entier) en température via un produit en croix
  float temperature_celcius = valeur_brute * (5.0 / 1023.0 * 100.0);
  
  // Envoi la mesure au PC pour affichage et attends 250ms
  Serial.println(temperature_celcius);
  delay(250);
}
