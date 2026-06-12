#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <Servo.h>

LiquidCrystal_I2C lcd(0x27,16,2);

Servo myservo;

int trigPin = 9;
int echoPin = 10;

long duration;
int distance;

void setup() {

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  myservo.attach(6);

  lcd.init();
  lcd.backlight();

}

void loop() {

  for(int angle=0; angle<=180; angle+=10){

    myservo.write(angle);

    delay(300);

    distance = getDistance();

    lcd.clear();

    lcd.setCursor(0,0);
    lcd.print("Angle:");
    lcd.print(angle);

    lcd.setCursor(0,1);
    lcd.print("Dist:");
    lcd.print(distance);
    lcd.print("cm");

  }

  for(int angle=180; angle>=0; angle-=10){

    myservo.write(angle);

    delay(300);

    distance = getDistance();

    lcd.clear();

    lcd.setCursor(0,0);
    lcd.print("Angle:");
    lcd.print(angle);

    lcd.setCursor(0,1);
    lcd.print("Dist:");
    lcd.print(distance);
    lcd.print("cm");

  }

}

int getDistance(){

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance = duration * 0.034 / 2;

  return distance;

}