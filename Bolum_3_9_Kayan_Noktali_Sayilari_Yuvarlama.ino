void setup() {
  Serial.begin(9600);
  
  Serial.println("--- floor() (Asagi Yuvarlama) ---");
  Serial.println( floor(1) );    // 1.00 yazdırır
  Serial.println( floor(1.1) );  // 1.00 yazdırır
  Serial.println( floor(0) );    // 0.00 yazdırır
  Serial.println( floor(.1) );   // 0.00 yazdırır
  Serial.println( floor(-1) );   // -1.00 yazdırır
  Serial.println( floor(-1.1) ); // -2.00 yazdırır

  Serial.println("--- ceil() (Yukari Yuvarlama) ---");
  Serial.println( ceil(1) );    // 1.00 yazdırır
  Serial.println( ceil(1.1) );  // 2.00 yazdırır
  Serial.println( ceil(0) );    // 0.00 yazdırır
  Serial.println( ceil(.1) );   // 1.00 yazdırır
  Serial.println( ceil(-1) );   // -1.00 yazdırır
  Serial.println( ceil(-1.1) ); // -1.00 yazdırır

  Serial.println("--- round() (En Yakina Yuvarlama) ---");
  int result = round(1.1);
  Serial.println(result); // 1 yazdırır
}

void loop() {}