#include "BluetoothSerial.h"

BluetoothSerial SerialBT;

void setup() {
  Serial.begin(115200);
  SerialBT.begin("ESP32_BT_DEMO");

  Serial.println("Bluetooth is ready!");
}

// Usage of a function inside a program
// ------ Function to handle received message
void handleMessage(String msg) {
  msg.trim(); // remove extra spaces/newlines

  Serial.print("Received: ");
  Serial.println(msg);

  // Example logic
  if (msg == "HELLO") {
    SerialBT.println("Hi there! 👋");
  } 
  else if (msg == "LED") {
    SerialBT.println("Imagine controlling an LED 😄");
  } 
  else {
    SerialBT.println("You said: " + msg);
  }
}

void loop() {
  if (SerialBT.available()) {
    String message = SerialBT.readString();

    // ------- Call the function instead of writing logic here -----
    handleMessage(message);
  }
}