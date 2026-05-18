#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

int led = 10;
int buzzer = 8;

void setup() {

  Serial.begin(9600);

  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);

  dht.begin();

}

void loop() {

  float temp = dht.readTemperature();

  Serial.print("Temperature: ");
  Serial.println(temp);

  if (temp > 30) {

    digitalWrite(led, HIGH);

    tone(buzzer, 1000);

  }

  else {

    digitalWrite(led, LOW);

    noTone(buzzer);

  }

  delay(1000);

}