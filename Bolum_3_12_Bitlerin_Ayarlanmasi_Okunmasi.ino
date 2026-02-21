// Kitaptaki "bitFunctions" sketch'idir.
byte flags = 0;

// Bu örnekler flags adlı değişkendeki bitleri ayarlar, temizler veya okur

// bitSet örneği
void setFlag(int flagNumber) {
  bitSet(flags, flagNumber);
}

// bitClear örneği
void clearFlag(int flagNumber) {
  bitClear(flags, flagNumber);
}

// bitRead örneği
int getFlag(int flagNumber) {
  return bitRead(flags, flagNumber);
}

void setup() {
  Serial.begin(9600);
}

void loop() {
  flags = 0; // tüm bayrakları temizle (clear all flags)
  showFlags();
  
  setFlag(2); // bazı bayrakları ayarla (set some flags)
  setFlag(5);
  showFlags();
  
  clearFlag(2);
  showFlags();
  
  delay(10000); // çok uzun bir süre bekle
}

// ayarlanmış (1 yapılmış) bayrakları raporlar
void showFlags() {
  for(int flag = 0; flag < 8; flag++) {
    if (getFlag(flag) == true)
      Serial.print("* bayrak ayarlandi: "); 
    else
      Serial.print("bayrak temiz (0): ");
    
    Serial.println(flag);
  }
  Serial.println();
}