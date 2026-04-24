#define LED_PIN 2 // define the pin number of the LED

void setup() {
  // configure GPIO pin as output
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH); // turn LED ON
  delay(1000);                 // wait 1 second

  digitalWrite(LED_PIN, LOW);  // turn LED OFF
  delay(1000);                 // wait 1 second
}