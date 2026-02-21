void setup() {
  Serial.begin(9600);
  
  int x = 6;
  x = x << 1; // 6 bir kere sola kaydırılırsa 12 olur (6 x 2)
  Serial.println(x);
  
  x = x >> 2; // 12 iki kere sağa kaydırılırsa 3 olur (12 / 4)
  Serial.println(x);

  // Bit kaydırmanın donanım açısından matematikten daha hızlı çalışması örneği:
  int a = 10;
  int b = 20;
  int c = (a << 1) + (b >> 2); // (a çarpı 2) artı (b bölü 4) ile aynıdır
  Serial.println(c);
}

void loop() {}