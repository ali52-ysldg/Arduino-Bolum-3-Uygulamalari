// Kitaptaki eksiksiz "Random" sketch'idir.
int randNumber;

void setup() {
  Serial.begin(9600);
  while(!Serial); // Seri portun bağlanmasını bekle

  // Tohum değeri olmadan rastgele sayılar yazdırma
  Serial.println("0 ile 9 arasinda 20 rastgele sayi yazdir:");
  for(int i = 0; i < 20; i++) {
    randNumber = random(10);
    Serial.print(randNumber); Serial.print(" ");
  }
  Serial.println();

  Serial.println("2 ile 9 arasinda 20 rastgele sayi yazdir:");
  for(int i = 0; i < 20; i++) {
    randNumber = random(2, 10);
    Serial.print(randNumber); Serial.print(" ");
  }
  
  // Her seferinde aynı tohum değeri ile rastgele sayılar yazdırma
  randomSeed(1234);
  Serial.println();
  Serial.println("Sabit tohum sonrasi 0 ile 9 arasinda 20 rastgele sayi:");
  for(int i = 0; i < 20; i++) {
    randNumber = random(10);
    Serial.print(randNumber); Serial.print(" ");
  }

  // Her seferinde farklı bir tohum değeri ile rastgele sayılar yazdırma
  randomSeed(analogRead(0)); // hiçbir şeyin bağlı olmadığı analog pinden oku
  Serial.println();
  Serial.println("Dalgalanan tohum sonrasi 0 ile 9 arasinda 20 rastgele sayi:");
  for(int i = 0; i < 20; i++) {
    randNumber = random(10);
    Serial.print(randNumber); Serial.print(" ");
  }
  Serial.println("\n");
}

void loop() {}