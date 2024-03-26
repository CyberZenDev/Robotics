// Define pin numbers
const int ledPin = 2;
const int ldrPin = A0;

void setup() {
  // Initialize LED pin as an output
  pinMode(ledPin, OUTPUT);
  // No need to initialize LDR pin for analog reading
}

void loop() {
  // Read the value from the LDR (0-1023)
  int ldrValue = analogRead(ldrPin);

  // If it's dark (LDR value is below threshold)
  if (ldrValue < 500) {
    // Turn the LED on
    digitalWrite(ledPin, HIGH);
  } else {
    // Turn the LED off
    digitalWrite(ledPin, LOW);
  }
}
