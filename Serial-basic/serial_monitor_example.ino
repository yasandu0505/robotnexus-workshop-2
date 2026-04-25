
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("ESP32 Serial Monitor Example");
  Serial.println("Send any character to receive it back.");
}

void loop() {
  // Check if there is data available to read
  if (Serial.available() > 0) {
    // read the incoming byte:
    char incomingByte = Serial.read();

    // print the received byte
    Serial.print("I received: ");
    Serial.println(incomingByte);
  }
}
