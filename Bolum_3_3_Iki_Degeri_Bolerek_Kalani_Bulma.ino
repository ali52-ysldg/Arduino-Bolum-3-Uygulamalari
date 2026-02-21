void setup() {
  Serial.begin(9600);

  int myValue0 = 20 % 10; // 20'nin 10'a bölümünden kalanı al (modül)
  int myValue1 = 21 % 10; // 21'in 10'a bölümünden kalanı al (modül)

  Serial.println("--- 10'un Kati Kontrolu ---");
  for (int myValue = 0; myValue <= 20; myValue += 5) {
    if (myValue % 10 == 0) {
      Serial.print(myValue);
      Serial.println(" degeri 10'un katidir");
    }
  }

  Serial.println("\n--- Tek/Cift Kontrolu ---");
  for (int myValue = 0; myValue <= 3; myValue++) {
    if (myValue % 2 == 0) {
      Serial.print(myValue); Serial.println(" degeri cifttir");
    } else {
      Serial.print(myValue); Serial.println(" degeri tektir");
    }
  }

  Serial.println("\n--- Kayan Nokta Simulasyonu ---");
  int int_part = 363 / 30; // sonuc: 12
  int remainder = 363 % 30; // sonuc: 3
  int fractional_part = remainder * 100 / 30; // sonuc: 10
  
  Serial.print(int_part); Serial.print("."); Serial.println(fractional_part);
}

void loop() {}