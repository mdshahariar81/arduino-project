int red = 10;
int yellow = 9;
int green = 8;
int buzzer = 7;

void setup() {

  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);

}

void loop() {

  // RED
  digitalWrite(red, HIGH);

  tone(buzzer,1000);

  delay(1000);

  noTone(buzzer);

  delay(1000);

  digitalWrite(red, LOW);

  delay(1000);


  // YELLOW
  digitalWrite(yellow, HIGH);

  tone(buzzer,1000);

  delay(1000);

  noTone(buzzer);

  delay(1000);

  digitalWrite(yellow, LOW);

  delay(1000);


  // GREEN
  digitalWrite(green, HIGH);

  tone(buzzer,1000);

  delay(1000);

  noTone(buzzer);

  delay(1000);

  digitalWrite(green, LOW);

  delay(1000);

}