#include <Servo.h>

Servo myservo;

int trig=9;
int echo=10;

void setup(){

Serial.begin(9600);

pinMode(trig,OUTPUT);
pinMode(echo,INPUT);

myservo.attach(6);

}

void loop(){

for(int angle=15;angle<=165;angle++){

myservo.write(angle);

delay(30);

int distance=calculateDistance();

Serial.print(angle);
Serial.print(",");
Serial.print(distance);
Serial.print(".");

}

for(int angle=165;angle>=15;angle--){

myservo.write(angle);

delay(30);

int distance=calculateDistance();

Serial.print(angle);
Serial.print(",");
Serial.print(distance);
Serial.print(".");

}

}

int calculateDistance(){

digitalWrite(trig,LOW);
delayMicroseconds(2);

digitalWrite(trig,HIGH);
delayMicroseconds(10);

digitalWrite(trig,LOW);

long duration=pulseIn(echo,HIGH);

int distance=duration*0.034/2;

return distance;

}