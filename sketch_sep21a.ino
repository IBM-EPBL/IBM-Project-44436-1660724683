#include <Servo.h>

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

Servo servo_3;

void setup()
{
  pinMode(0, INPUT);
  pinMode(13, OUTPUT);
  pinMode(0, OUTPUT);
  servo_3.attach(3, 500, 2500);
  pinMode(A5, INPUT);
  pinMode(12, OUTPUT);
  pinMode(A4, INPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  if (digitalRead(0) == 1) {
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(0, LOW);
  }
  if (0.01723 * readUltrasonicDistance(0, 0) >= 100) {
    servo_3.write(90);
    delay(1000); // Wait for 1000 millisecond(s)
  } else {
    servo_3.write(0);
    delay(1000); // Wait for 1000 millisecond(s)
  }
  if (analogRead(A5) <= 100) 
  {
    digitalWrite(12, HIGH);
  } else {
    digitalWrite(12, LOW);
  }
  if ((-40 + 0.488155 * (analogRead(A4) - 20)) < 30) {
    digitalWrite(11, HIGH);
  } else {
    digitalWrite(11, LOW);
  }
}
