//water alarm
int water;

void setup() {

  pinMode(10, OUTPUT);

}

void loop() {

  water = analogRead(A0);

  if (water > 100) {

    digitalWrite(10, HIGH);

    tone(8,1000);

  }

  else {

    digitalWrite(10, LOW);

    noTone(8);

  }

}