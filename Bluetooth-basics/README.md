# ESP32 Bluetooth Serial Communication

Send text from your phone to ESP32 over Bluetooth and see it on the Serial Monitor.


## Requirements

- ESP32 board
- USB cable
- Android smartphone
- [Serial Bluetooth Terminal](https://play.google.com/store/apps/details?id=de.kai_morich.serial_bluetooth_terminal) app


## How to Run

1. Upload the code to your ESP32
2. Open Serial Monitor and set baud rate to **115200**
3. Turn on Bluetooth on your Android phone
4. Pair with **ESP32_BT_DEMO**
5. Open the Bluetooth terminal app and send any message


## Expected Output

Serial Monitor shows:

```
Received: Hello
```

Phone receives:

```
ESP32 received: Hello
```


## What is Baud Rate?

Baud rate is the speed of data transfer between ESP32 and your computer, measured in bits per second. Both the ESP32 and your Serial Monitor must be set to the same value (`115200`), otherwise the output will look like random garbage characters.


## Constraints

> **Android only — does not work on iPhone/iPad.**

This project uses **Classic Bluetooth (SPP)**, which Apple blocks on iOS. iPhones only allow **Bluetooth Low Energy (BLE)**, which requires completely different code and libraries. If you are on iOS, this project will not work as-is.


## Troubleshooting

| Problem | Fix |
|---|---|
| ESP32 not visible on phone | Restart the ESP32 |
| Cannot connect | Check Bluetooth permissions on your phone |
| No output on Serial Monitor | Make sure baud rate is set to 115200 |