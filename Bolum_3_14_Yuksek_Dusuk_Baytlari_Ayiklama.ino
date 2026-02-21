// Kitaptaki "ByteOperators" sketch'idir.

// long işlemi için makrolar (Sketch'in en üstüne tanımlanır)
#define highWord(w) ((w) >> 16)
#define lowWord(w) ((w) & 0xffff)

int intValue = 258; // Onaltılık sistemde (hex) 258, 0x102 demektir
long longValue = 16909060; // 32 bitlik uzun değer örneği

void setup() {
  Serial.begin(9600);
}

void loop() {
  // int (16 bit) ayıklama
  byte loByte, hiByte;
  hiByte = highByte(intValue);
  loByte = lowByte(intValue);
  
  Serial.print("Dönüştürülecek tamsayı değeri: "); Serial.println(intValue, DEC);
  Serial.print("Onaltılık sistemdeki değeri: "); Serial.println(intValue, HEX);
  Serial.print("Düşük bayt (low byte): "); Serial.println(loByte, DEC);
  Serial.print("Yüksek bayt (high byte): "); Serial.println(hiByte, DEC);

  // long (32 bit) ayıklama
  int loWord = lowWord(longValue);
  int hiWord = highWord(longValue);
  Serial.println("\nUzun (long) degeri parcalama:");
  Serial.print("Dusuk kelime (loWord): "); Serial.println(loWord, DEC);
  Serial.print("Yuksek kelime (hiWord): "); Serial.println(hiWord, DEC);
  
  delay(10000); // çok uzun bir süre bekle
}