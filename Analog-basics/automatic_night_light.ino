/*
  Automatic Night Light

  This program turns on an LED automatically when it gets dark. It uses a
  Light Dependent Resistor (LDR) to measure the ambient light level.
*/

// Pin assignments
const int ldrPin = 36; // LDR is connected to GPIO 36 (an ADC pin)
const int ledPin = ##;  // LED is connected to GPIO 2

// --- Tweak this value ---
// The threshold for darkness. This value depends on your LDR and resistor setup.
// ESP32's ADC has a 12-bit resolution, so readings are from 0 (bright) to 4095 (dark).
// A good starting point might be around 2500.
// Upload the code and check the Serial Monitor to see the readings in your environment
// to find the best threshold for you.
const int threshold = 2500;

void setup() {
  // Initialize serial communication for debugging
  Serial.begin(115200);

  // Set the LED pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Read the analog value from the LDR sensor
  int ldrValue = analogRead(ldrPin);

  // Print the LDR value to the Serial Monitor to help with calibration
  Serial.print("LDR Reading: ");
  Serial.println(ldrValue);

  // Check if the light level is below the threshold (it's dark)
  if (ldrValue < threshold) {
    // It's dark, so turn the LED on
    digitalWrite(ledPin, HIGH);
    Serial.println("It's dark -> LED ON");
  } else {
    // It's light, so turn the LED off
    digitalWrite(ledPin, LOW);
    Serial.println("It's light -> LED OFF");
  }

  // Wait for a moment before taking the next reading
  delay(500);
}
