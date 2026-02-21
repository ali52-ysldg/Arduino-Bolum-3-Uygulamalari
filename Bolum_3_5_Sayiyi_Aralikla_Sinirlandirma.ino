void setup() {
  Serial.begin(9600);
}

void loop() {
  // Test için bir değer oluşturuyoruz
  int myValue = analogRead(A0); 
  
  // constrain() değeri 100 ile 200 arasında kalmaya zorlar
  int myConstrainedValue = constrain(myValue, 100, 200);
  
  Serial.print("Okunan: "); Serial.print(myValue);
  Serial.print(" Sinirlanmis: "); Serial.println(myConstrainedValue);
  delay(1000);
}