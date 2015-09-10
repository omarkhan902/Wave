void setup() {
  for(int fstled = 0; fstled < 10; fstled++){
    pinMode(fstled, OUTPUT);
  }

}

void loop() {
  for(int fstled = 0; fstled < 10; fstled++){
    digitalWrite(fstled, HIGH);
    delay (100);
    digitalWrite(fstled, LOW);
    delay (100);
   
  }

}
