#define NUM_LEDS 4 // define the number of LEDs

int ledPins[NUM_LEDS] = {2, 4, 5, 18}; // define the pins for each LED

void setup() {
  // set all pins as OUTPUT
  pinMode(ledPins[0], OUTPUT);
  pinMode(ledPins[1], OUTPUT);
  pinMode(ledPins[2], OUTPUT);
  pinMode(ledPins[3], OUTPUT);

  /* more efficient way to set all pins as OUTPUT by iterating through the array
   This is useful when you have many pins to set as OUTPUT
   instead of writing pinMode() for each pin
  */

  // for (int i = 0; i < NUM_LEDS; i++) {
  //   pinMode(ledPins[i], OUTPUT);
  // }
}

void loop() {
  // turn ON LEDs one by one
  for (int i = 0; i < NUM_LEDS; i++) {
    digitalWrite(ledPins[i], HIGH); // turn ON the LED
    delay(200); // wait for 200ms
    digitalWrite(ledPins[i], LOW); // turn OFF the LED
  }
}