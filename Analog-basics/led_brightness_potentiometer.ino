/*
  Analog Input
  Demonstrates analog input by reading an analog sensor on pin 39 and
  turning on and off a light emitting diode(LED) .
  The amount of time the LED will be on and off depends on the value obtained
  by analogRead().

  This example code is in the public domain.
*/

const int ledPin = ##;      // LED connected to digital pin 9
const int potPin = 39;     // Potentiometer connected to analog pin A0

int potValue = 0;        // value read from the pot
int brightness = 0;      // value to write to the LED pin

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // read the value from the sensor:
  potValue = analogRead(potPin);

  // map the potentiometer value (0-1023) to the LED brightness range (0-255):
  brightness = map(potValue, 0, 4096, 0, 255);

  // set the brightness of the LED:
  analogWrite(ledPin, brightness);
  
  delay(50);
}

/*
ADDITIONAL TASK:
	Try to get the Potentiometer reading and the LED brightness reading on the Serial Monitor.
*/