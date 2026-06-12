#include <Servo.h>

Servo myservo;

int joystickX = A0;

void setup() {

  myservo.attach(6);

  myservo.write(90);

}

void loop() {

  int xValue = analogRead(joystickX);

  if (xValue < 450) {

    myservo.write(0);

  }

  else if (xValue > 550) {

    myservo.write(180);

  }

  else {

    myservo.write(90);

  }

  delay(20);

}