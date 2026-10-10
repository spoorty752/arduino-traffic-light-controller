# Arduino Traffic Light Controller

## Overview
A traffic light controller simulated using Arduino Uno and Wokwi. Three LEDs represent red, yellow and green traffic signals. The controller switches each LED on and off in a timed sequence.

## Components
- Arduino Uno
- Red LED
- Yellow LED
- Green LED
- 3 × 220 Ω resistors
- Jumper wires

## Pin Connections

| LED | Arduino Pin |
|---|---|
| Red | Digital pin 13 |
| Yellow | Digital pin 12 |
| Green | Digital pin 11 |

Each LED is connected in series with a current-limiting resistor, with the circuit returning to GND.

## Traffic Light Sequence
1. Red LED: 3 seconds
2. Yellow LED: 1 second
3. Green LED: 5 seconds
4. Yellow LED: 1 second
5. Repeat continuously

## Concepts Practiced
- GPIO output configuration using `pinMode()`
- Digital output control using `digitalWrite()`
- HIGH and LOW logic states
- Timing using `delay()`
- Repeated execution using `loop()`

## Limitations
This is a beginner educational simulation. It uses blocking delays and is not intended for real traffic-control equipment.

## Tools
- Arduino Uno
- Wokwi Simulator

## Future Improvements
- Implement non-blocking timing using `millis()`
- Add a pedestrian push button
- Explore state-machine-based control
