void setup() {
  Serial.begin(9600);
}

void loop() {
  int myValue = analogRead(A0);
  
  // myMinValue, myValue veya 200'den küçük olanı olacaktır
  int myMinValue = min(myValue, 200); 
  
  // myMaxValue, myValue veya 100'den büyük olanı olacaktır
  int myMaxValue = max(myValue, 100); 

  // Üç analog okumanın en küçüğünü bulma:
  int myMinValue3 = min(analogRead(0), min(analogRead(1), analogRead(2)));

  // Dört analog okumanın en büyüğünü bulma:
  int myMaxValue4 = max(analogRead(0), max(analogRead(1), max(analogRead(2), analogRead(3))));
  
  delay(1000);
}