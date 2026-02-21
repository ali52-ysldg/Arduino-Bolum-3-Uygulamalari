// Kitaptaki "Forming an int or long with byte operations" sketch'idir.

// long birleştirme işlemi için makrolar
#define makeLong(hi, low) (((long) hi) << 16 | (low))
#define highWord(w) ((w) >> 16)
#define lowWord(w) ((w) & 0xffff) 

int intValue = 0x102; // 258
long longValue = 0x1020304; // ondalık: 16909060

void setup() {
  Serial.begin(9600);
}

void loop() {
  // byte'lardan int oluşturma
  int aWord;
  byte loByte, hiByte;
  hiByte = highByte(intValue);
  loByte = lowByte(intValue);
  
  Serial.println(intValue, DEC);
  Serial.println(loByte, DEC);
  Serial.println(hiByte, DEC);
  
  aWord = word(hiByte, loByte); // baytları tekrar bir kelimeye (word/int) dönüştürür
  Serial.print("Birlestirilen int: "); Serial.println(aWord, DEC);

  // kelimelerden (words) long oluşturma
  int loWord, hiWord;
  Serial.println("\nlongValue baslangic degeri:");
  Serial.println(longValue, DEC); // 16909060 yazdırır
  
  loWord = lowWord(longValue); // long'u iki kelimeye ayır
  hiWord = highWord(longValue);
  
  Serial.println(loWord, DEC); // 772 yazdırır
  Serial.println(hiWord, DEC); // 258 yazdırır
  
  longValue = makeLong(hiWord, loWord); // kelimeleri tekrar long'a dönüştür
  Serial.print("Birlestirilen long: "); Serial.println(longValue, DEC); // tekrar 16909060 yazdırır
  
  delay(10000); // çok uzun bir süre bekle
}