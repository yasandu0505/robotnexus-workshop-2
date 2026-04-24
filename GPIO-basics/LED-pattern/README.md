# ESP32 Running LED Project (LED Chaser)

## Objective
Learn how to control multiple GPIO pins on the ESP32 and create a running LED pattern using loops and arrays.

## Components Required
- ESP32 board
- 4 x LEDs
- 4 x 220 resistors
- Breadboard
- Jumper wires
- USB cable

## What is GPIO?
GPIO stands for General Purpose Input Output.
ESP32 pins can be programmed as:

- **OUTPUT** - send signals (LEDs, motors)
- **INPUT** - receive signals (buttons, sensors)

## Digital Signals
- HIGH - ON (3.3V)
- LOW - OFF (0V)

## Circuit Connections
Connect LEDs to these GPIO pins:

- LED 1 - GPIO 2
- LED 2 - GPIO 4
- LED 3 - GPIO 5
- LED 4 - GPIO 18

For each LED:
- Long leg (Anode) - GPIO pin
- Short leg (Cathode) - Resistor - GND

## Code Structure
- `setup()` - runs once (used to configure pins)
- `loop()` - runs forever (main logic runs here)

## How It Works
- We store GPIO pins in an array
- A loop turns LEDs ON and OFF one by one
- This creates a running light effect

## What You Learn
- Using multiple GPIO pins
- Arrays in embedded programming
- Using loops (`for`)
- Creating patterns with code

## Try This Yourself
- Change speed (modify `delay`)
- Add more LEDs
- Make all LEDs blink together
- Create your own pattern

## Tips
- Use only safe GPIO pins (e.g., 2, 4, 5, 18)
- Always use resistors with LEDs
- Check wiring if LEDs don't light up