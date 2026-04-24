# RobotNexus 3 - Day 2
Welcome to RobotNexus 3! This repository contains the sample code, circuit diagrams, and documentation required for our hands-on session.

This workshop is designed to take you from the fundamentals of Digital and Analog I/O to building wireless applications using the ESP32’s built-in Bluetooth capabilities.

## 🛠️ Pre-Workshop Preparation
To ensure we can dive straight into coding, all delegates are required to set up their development environment before the session starts.

1. Install Arduino IDE
If you don't have it installed, download and install the latest version of the Arduino IDE 2.x:

[Download Arduino IDE](https://www.arduino.cc/en/software/)

2. Configure ESP32 Board Manager
The Arduino IDE needs a specific configuration to communicate with the ESP32 hardware.

    1. Open Arduino IDE.

    2. Go to File > Preferences.

    3. Locate the Additional Boards Manager URLs field.

    4. Copy and paste the following link into the field:
https://dl.espressif.com/dl/package_esp32_index.json
(Note: If you already have a URL there, separate them with a comma).

    5. Click OK.

3. Install ESP32 Board Package
    1. Go to Tools > Board > Boards Manager...

    2. In the search bar, type "ESP32".

    3. Find the package by Espressif Systems and click Install.

    4. Wait for the installation to complete (this may take a few minutes depending on your internet speed).

4. Selection of Board
Once installed, you can select your board for the workshop:

- Go to Tools > Board > esp32 > ESP32 Dev Module.

## 📅 Workshop Agenda
- Introduction to ESP32: Pinout, Logic Levels (3.3V), and Features.

- Digital I/O: Using digitalWrite, digitalRead, and Internal Pull-ups.

- Analog & PWM: 12-bit ADC (analogRead) and LED Control (LEDC).

- Logic & Functions: Structuring code for scalability.

- Serial Communication: Debugging and high-speed data transfer (115200 baud).

- Wireless: Implementing Bluetooth Classic Serial for smartphone interaction.

## ⚠️ Important Safety Note
- Voltage: The ESP32 operates at 3.3V. Connecting 5V directly to any GPIO pin will likely damage the board.

- Drivers: Some Windows/Mac users may need the CP210x or CH340 USB-to-UART bridge drivers. If your board isn't detected, please check the drivers/ folder in this repo.

## 🚀 Quick Start  
To test if your setup is working, open the Blink sketch from the examples/ folder and try uploading it to your board!

## Troubleshooting
If met with a Drivers error, download and install the latest CH340 drivers. [Download Drivers](https://www.wch-ic.com/downloads/CH341SER_ZIP.html)
