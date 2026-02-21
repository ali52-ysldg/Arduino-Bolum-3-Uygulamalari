void setup() {
  Serial.begin(9600);
  
  // sqrt() fonksiyonu sayının karekökünü alır
  Serial.print("9'un karekoku: ");
  Serial.println( sqrt(9) ); // 3.00 yazdırır
}

void loop() {}