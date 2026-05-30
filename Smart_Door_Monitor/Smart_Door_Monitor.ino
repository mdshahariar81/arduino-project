#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <Servo.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

Servo myservo;

int trigPin = 9;
int echoPin = 10;

long duration;
int distance;

void setup() {

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  myservo.attach(6);

  myservo.write(90);

  lcd.init();
  lcd.backlight();

  lcd.setCursor(0,0);
  lcd.print("Smart Door");

  lcd.setCursor(0,1);
  lcd.print("Monitor");

  delay(2000);

  lcd.clear();

}

void loop() {

  distance = getDistance();

  if(distance > 0 && distance < 20){

    lcd.clear();

    lcd.setCursor(0,0);
    lcd.print("You are welcome!");

    lcd.setCursor(0,1);
    lcd.print("Distance:");
    lcd.print(distance);
    lcd.print("cm");

  }

  else{

    lcd.clear();

    lcd.setCursor(0,0);
    lcd.print("Monitoring...");

    lcd.setCursor(0,1);
    lcd.print("No Visitor");

  }

  delay(500);

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