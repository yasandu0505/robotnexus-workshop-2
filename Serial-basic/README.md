# Serial Communication Basics
Use the Serial Monitor to view feedback from the Arduino / ESP32 or send commands to the board

## Commands to keep in mind
1. Initiate Serial Communication with Serial Moniter
In the `void setup()`: 
- `Serial.begin(115200);` for ESP32
- `Serial.begin(9600);` for Arduino

2. Check whether Serial data is sent from the Serial Moniter to the esp:
`Serial.available()`

3. Print data on the Serial Monitor: `Serial.print()`; or  `Serial.println();`

4. Receive data from the Serial Monitor: `Serial.read();`