int sensor = A0;
int led = 10;
int buzzer = 8;

void setup() {

  Serial.begin(9600);

  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);

}

void loop() {

  int soilValue = analogRead(sensor);

  Serial.print("Soil Value: ");
  Serial.println(soilValue);

  if (soilValue > 700) {

    digitalWrite(led, HIGH);

    tone(buzzer, 1000);

  }

  else {

    digitalWrite(led, LOW);

    noTone(buzzer);

  }

  delay(1000);

}