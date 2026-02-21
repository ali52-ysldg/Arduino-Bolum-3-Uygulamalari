void setup() {
  Serial.begin(9600);
  
  float deg = 30; // derece cinsinden açı
  float rad = deg * PI / 180; // radyana dönüştürme formülü
  
  Serial.println(rad); // radyanı yazdırır
  Serial.println(sin(rad), 5); // sinüsü yazdırır (5 ondalık basamakla)
  Serial.println(cos(rad), 5); // kosinüsü yazdırır (5 ondalık basamakla)

  // Alternatif olarak sabitlerle dönüştürme yolu:
  rad = deg * DEG_TO_RAD; // dereceyi radyana dönüştürme yolu
  deg = rad * RAD_TO_DEG; // radyanı dereceye dönüştürme yolu
}

void loop() {}