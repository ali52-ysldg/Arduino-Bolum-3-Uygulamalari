void setup() {
  Serial.begin(9600);
}

void loop() {
  // Analog okuma kitaptaki örnektir, boş pinlerden okur
  int x = analogRead(A0);
  int y = analogRead(A1);
  
  // abs() fonksiyonu negatif değeri pozitife çevirir (farkın mutlak değerini alır)
  if (abs(x - y) > 10) {
    Serial.println("Analog degerler 10'dan fazla farklilik gosteriyor");
  }
  delay(1000);
}