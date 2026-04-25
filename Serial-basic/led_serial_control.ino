// Define the pin number where the LED is connected.
// Using a constant variable for the pin number is a good practice.
// It makes the code easier to read and allows you to change the pin easily in one place.
const int ledPin = 13;

// This function is designed to make the LED blink a specific number of times.
// We will call this function when we receive the "LED BLINK" command.
void blinkLED() {
  // This 'for' loop will repeat the code inside it 5 times.
  // The variable 'i' starts at 0 and increases by 1 in each iteration until it is no longer less than 5.
  for (int i = 0; i < 5; i++) {
    // Turn the LED on.
    // digitalWrite() sends a HIGH (on) or LOW (off) signal to a pin.
    // Here, we send a HIGH signal to the ledPin to light up the LED.
    digitalWrite(ledPin, HIGH);
    
    // Pause the program for 500 milliseconds (half a second).
    // This delay keeps the LED on so we can see it.
    delay(500);
    
    // Turn the LED off.
    // We send a LOW signal to the ledPin to turn the LED off.
    digitalWrite(ledPin, LOW);
    
    // Pause the program for another 500 milliseconds.
    // This delay creates the "off" time of the blink.
    delay(500);
  }
}

// The setup() function runs only once, right after the ESP32 is powered on or reset.
// It's used for initialization tasks.
void setup() {
  // Initialize the serial communication at a baud rate of 115200.
  // This is the speed at which the ESP32 will send and receive data with the Serial Monitor.
  // Make sure the Serial Monitor is also set to this speed.
  Serial.begin(115200);

  // Configure the ledPin as an OUTPUT.
  // This tells the ESP32 that we will be sending signals out of this pin to control the LED.
  pinMode(ledPin, OUTPUT);

  // Print a welcome message and instructions to the Serial Monitor.
  // This helps the user understand how to interact with the program.
  Serial.println("--- LED Control via Serial Monitor ---");
  Serial.println("Send 'LED ON' to turn the LED on.");
  Serial.println("Send 'LED OFF' to turn the LED off.");
  Serial.println("Send 'LED BLINK' to make the LED blink 5 times.");
}

// The loop() function runs continuously over and over again after the setup() function is complete.
// This is where the main logic of the program resides.
void loop() {
  // Check if there is any data sent from the Serial Monitor that is waiting to be read.
  // Serial.available() returns the number of bytes (characters) available.
  if (Serial.available() > 0) {
    // If data is available, read the entire line of text until a newline character is encountered.
    // The text is stored in a String variable named 'command'.
    String command = Serial.readStringUntil('\n');
    
    // Remove any leading or trailing whitespace (like spaces or tabs) from the command.
    // This ensures that "LED ON " is treated the same as "LED ON".
    command.trim();

    // Print the command that was received back to the Serial Monitor.
    // This is useful for debugging to see what the ESP32 is receiving.
    Serial.print("Received command: ");
    Serial.println(command);

    // Use if-else if statements to check what the command is.
    if (command == "LED ON") {
      // If the command is exactly "LED ON", turn the LED on.
      digitalWrite(ledPin, HIGH);
      Serial.println("Action: LED has been turned ON");
    } else if (command == "LED OFF") {
      // If the command is "LED OFF", turn the LED off.
      digitalWrite(ledPin, LOW);
      Serial.println("Action: LED has been turned OFF");
    } else if (command == "LED BLINK") {
      // If the command is "LED BLINK", inform the user and call the blinkLED() function.
      Serial.println("Action: Blinking LED 5 times...");
      blinkLED(); // This call executes the blinking sequence.
      Serial.println("Blinking finished.");
    } else {
      // If the received command does not match any of the known commands,
      // print an error message to inform the user.
      Serial.println("Error: Unknown command. Please try again.");
    }
  }
}
