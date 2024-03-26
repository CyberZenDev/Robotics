// Define pin numbers
const int ledPin = 2;
const int buttonPin = 3;

// Variable to store button state
int buttonState = 0;

void setup() {
  // Initialize LED pin as an output
  pinMode(ledPin, OUTPUT);
  // Initialize button pin as an input
  pinMode(buttonPin, INPUT);
}

void loop() {
  // Read the state of the button
  buttonState = digitalRead(buttonPin);

  // If button is pressed (HIGH)
  if (buttonState == HIGH) {
    // Turn the LED on
    digitalWrite(ledPin, HIGH);
    // Delay for 500 milliseconds
    delay(500);
    // Turn the LED off
    digitalWrite(ledPin, LOW);
    // Delay for 500 milliseconds
    delay(500);
  }
}
