// Define the pin number for the LED
const int ledPin = 2;

void setup() {
  // Initialize the digital pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Turn the LED on (HIGH)
  digitalWrite(ledPin, HIGH);
  // Wait for 500 milliseconds
  delay(500);
  // Turn the LED off (LOW)
  digitalWrite(ledPin, LOW);
  // Wait for 500 milliseconds
  delay(500);
}
