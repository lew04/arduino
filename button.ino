// Constants for pin numbers
 int ledPin =6 ;    // Pin number for the LED
int buttonPin =3 ;  // Pin number for the button

// Variable to store the button state
int buttonState = 0;

void setup() {
  // Initialize the LED pin as an output
  pinMode(ledPin, OUTPUT);
  
  // Initialize the button pin as an input
  pinMode(buttonPin, INPUT);
}

void loop() {
  // Read the state of the button
  buttonState = digitalRead(buttonPin);

  // Check if the button is pressed
  if (buttonState == HIGH) {
    // Turn the LED on
    digitalWrite(ledPin, HIGH);
  } else {
    // Turn the LED off
    digitalWrite(ledPin, LOW);
  }
}
