// Define the pin connections
const int horAxisPin = A0; // Horizontal Axis connected to analog pin A0
const int vertAxisPin = A1; // Vertical Axis connected to analog pin A1
const int buttonPin = 2; // Button connected to digital pin 2

void setup() {
  // Initialize serial communication at 9600 bits per second
  Serial.begin(9600);

  // Set the button pin as input
  pinMode(buttonPin, INPUT);
}

void loop() {
  // Read the horizontal axis value
  int horValue = analogRead(horAxisPin);

  // Read the vertical axis value
  int vertValue = analogRead(vertAxisPin);

  // Read the button state
  int buttonState = digitalRead(buttonPin);

  // Print the values to the serial monitor
  Serial.print("Horizontal Axis: ");
  Serial.print(horValue);
  Serial.print(" | Vertical Axis: ");
  Serial.print(vertValue);
  Serial.print(" | Button: ");
  Serial.println(buttonState);

  // Wait for a short period before reading again
  delay(100);
}

//narancs, fekete, lila, fehér, kék
//narancs -> 