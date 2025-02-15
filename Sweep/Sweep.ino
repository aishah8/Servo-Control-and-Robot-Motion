#include <Servo.h>

Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;
Servo myservo5;
Servo myservo6;

void setup() {
  myservo1.attach(2);   // Pin for servo 1
  myservo2.attach(3);  // Pin for servo 2
  myservo3.attach(4);  // Pin for servo 3
  myservo4.attach(5);  // Pin for servo 4
  myservo5.attach(6);  // Pin for servo 5
  myservo6.attach(7);  // Pin for servo 6
}

void loop() {
  // Sweep all servos for 2 seconds
  for (int pos = 0; pos <= 180; pos++) {
    myservo1.write(pos);
    myservo2.write(pos);
    myservo3.write(pos);
    myservo4.write(pos);
    myservo5.write(pos);
    myservo6.write(pos);
    delay(15);
  }
  delay(2000);  // Wait for 2 seconds

  // Hold all servos at 90 degrees
  myservo1.write(90);
  myservo2.write(90);
  myservo3.write(90);
  myservo4.write(90);
  myservo5.write(90);
  myservo6.write(90);
  while (true);  // Keep servos at 90 degrees indefinitely
}
