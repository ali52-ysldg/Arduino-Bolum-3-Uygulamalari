void setup() {
  Serial.begin(9600);

  int myValue;
  myValue = 1 + 2; // toplama
  myValue = 3 - 2; // çıkarma
  myValue = 3 * 2; // çarpma
  myValue = 3 / 2; // bölme (sonuç 1'dir, çünkü tamsayı bölmesinde kalan atılır)

  int value1 = 1 + 2 * 3 + 4; // işlem önceliği
  int value2 = ((1 + 2) * 3) + 4; // parantez ile öncelik değiştirme

  // Bir dakikada 60 saniye, bir saatte 60 dakika, bir günde 24 saat
  long seconds_per_day = 60 * 60 * 24; // (Hatalı: Taşma yapar)
  long seconds_per_day_dogru = 60L * 60 * 24; // (Doğru: L takısı ile uzun tamsayı işlemi)
  
  long seconds_per_day_plus_one_hatali = 1L + 60 * (60 * 24); // (İç parantezde taşma yapar)
  long seconds_per_day_plus_one_dogru = 1 + 60 * (60L * 24); // (Doğru kullanım)

  Serial.println("Kayan noktali bolme ornegi:");
  Serial.println(36.3/3, 10); // 10 ondalık basamağa kadar yazdırır
}

void loop() {}