void setup() {
  Serial.begin(9600);
  int myValue = 0;

  myValue = myValue + 1; // bu, myValue değişkenine bir ekler
  myValue += 1;          // bu da yukarıdaki ile aynı şeyi yapar
  myValue++;             // kısa yazım: bu da bir artırır

  myValue = myValue - 1; // bu, myValue değişkeninden bir çıkarır
  myValue -= 1;          // bu da yukarıdaki ile aynı şeyi yapar

  myValue = myValue + 5; // bu, myValue değişkenine beş ekler
  myValue += 5;          // bu da yukarıdaki ile aynı şeyi yapar

  // Artırma operatörünün yeri (Önce/Sonra)
  int myVal = 1;
  Serial.println(myVal++); // 1 yazdırır (önce yazdırır, sonra artırır)
  Serial.println(myVal);   // 2 yazdırır (artmış hali)
  Serial.println(++myVal); // 3 yazdırır (önce artırır, sonra yazdırır)
  Serial.println(myVal);   // 3 yazdırır
}

void loop() {}