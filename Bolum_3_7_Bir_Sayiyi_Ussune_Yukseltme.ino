void setup() {
  Serial.begin(9600);
  
  // pow() ile üs alma (Sonuç float döner)
  int myValue = pow(3, 2); // 3'ün karesi
  
  Serial.println(pow(3, 2)); // 9.00 yazdırır (float olduğu için ondalıklı)
  
  int z = pow(3, 2);
  Serial.println(z); // 9 yazdırır (tamsayıya dönüştüğü için ondalıksız)
  
  // İkinin on ikinci kökü hesaplaması (Piyano notaları frekans oranı örneği)
  float s = pow(2, 1.0 / 12); 
  Serial.print("Ikinin on ikinci koku: ");
  Serial.println(s, 5); // 1.05946
}

void loop() {}