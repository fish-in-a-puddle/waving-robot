// Warning: you must install the Servo library before flashing the firmware
#include <Servo.h>
// Establish the pins for the servo, ultrasonic sensor and LED
const int trigPin = 5;
const int echoPin = 6;
const int servoPin = 9;
const int ledPin = 8;
// Define the variable that will be used to calculate the distance
int duration;
int distance;
// Define a servo with the Servo library
Servo myServo;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);
  myServo.attach(servoPin);
  myServo.write(90);

}

void loop() {
    // This code uses the ultrasonic sensor to check if there is anything within 100cm of the robot
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    duration = pulseIn(echoPin, HIGH);
    distance = duration * 0.034 / 2;
    if (distance <= 100) {
        // If there is anything in the ultrasonic sensor's path, turn on the LED light and sweep the servo back and forth to make the waving motion
      digitalWrite(ledPin, HIGH);
      myServo.write(50);
      delay(500);
      myServo.write(120);
      delay(500);
    }
    else {
      // If there isn't anything in the sensor's path, turn of the LED
      digitalWrite(ledPin, LOW);
    }

}
