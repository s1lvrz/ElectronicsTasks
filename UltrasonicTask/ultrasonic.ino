#include <Servo.h>

// Pin Definitions
#define TRIG_PIN 9
#define ECHO_PIN 10
#define SERVO_PIN 6
#define LED_PIN 7

Servo myServo;

// Distance threshold (cm)
const int threshold = 10;

void setup() {
  Serial.begin(9600);

  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);

  myServo.attach(SERVO_PIN);
  myServo.write(0); // Initial position
}

// Function to measure distance
long getDistance() {
  long duration;
  long distance;

  // Trigger pulse
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  // Read echo
  duration = pulseIn(ECHO_PIN, HIGH);

  // Convert to cm
  distance = duration * 0.034 / 2;

  return distance;
}

void loop() {
  long distance = getDistance();

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance <= threshold && distance > 0) {
    myServo.write(90);   // Move servo
    digitalWrite(LED_PIN, HIGH); // LED ON
  } else {
    myServo.write(0);    // Return to original
    digitalWrite(LED_PIN, LOW);  // LED OFF
  }

  delay(200);
}
