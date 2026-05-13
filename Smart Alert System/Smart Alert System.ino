void setup() {

  pinMode(10, OUTPUT);

}

void loop() {

  digitalWrite(10, HIGH);

  tone(8, 1000);

  delay(500);

  digitalWrite(10, LOW);

  noTone(8);

  delay(500);

}