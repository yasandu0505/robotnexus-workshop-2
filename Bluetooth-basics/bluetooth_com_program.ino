#include "BluetoothSerial.h" // including the BluetoothSerial library

BluetoothSerial SerialBT; // creating an object of BluetoothSerial

void setup() {
  Serial.begin(115200); // starting serial communication

  // Start Bluetooth with a device name 
  SerialBT.begin("ESP32_BT_DEMO"); // name to be displayed in phone bluetooth settings

  // This is how you print things on the serial monitor
  Serial.println("Bluetooth is ready!"); 
  Serial.println("Pair your phone with ESP32_BT_DEMO");
}

/* This keeps running again and again checking whether any 
   communications are being recieved from the phone
*/
void loop() {
  // Check if data is received from phone
  if (SerialBT.available()) { // checks if there is data received from phone
    String message = SerialBT.readString(); // reads the data received from phone and stores it in a variable called message

    // Print received message to Serial Monitor
    Serial.print("Received: "); // prints "Received: " in the serial monitor
    Serial.println(message); // prints the message received from the phone in the serial monitor

    // Send response back to phone
    SerialBT.println("ESP32 received: " + message); // prints "ESP32 received: " followed by the message received from the phone in the serial monitor
  }
}