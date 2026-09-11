# Smart Parking System

A simple smart parking prototype using Arduino, IR sensors, Embedded C, and Python to monitor parking-slot availability.

## Project Overview

The Smart Parking System detects whether parking slots are occupied or vacant using IR sensors connected to an Arduino. The Arduino reads the sensor states and sends the slot information through serial communication. A Python program reads the serial data and displays the current parking availability.

## Features

- Real-time occupied/vacant slot detection
- Arduino-based sensor monitoring
- IR sensor interfacing through GPIO
- Embedded C logic for reading sensor states
- Python-based parking status display
- Simple and low-cost prototype design

## Technologies Used

- Arduino
- Embedded C / Arduino C
- IR Sensors
- GPIO
- Python
- Serial Communication

## Components

- Arduino Uno
- IR Sensors
- LEDs (optional)
- Jumper Wires
- Breadboard
- USB Cable

## Working

1. IR sensors are placed at individual parking slots.
2. Each sensor detects whether a vehicle is present.
3. Arduino reads the sensor states through digital GPIO pins.
4. Arduino sends the slot status through serial communication.
5. The Python program receives the data and displays the parking availability.

## Project Structure

```text
smart-parking-system/
│
├── arduino/
│   └── smart_parking.ino
│
├── circuit/
│   └── circuit_diagram.svg
│
├── python/
│   └── parking_monitor.py
│
├── README.md
└── .gitignore
## Arduino Code

The Arduino program is available in:

arduino/smart_parking.ino

## Python Program

The Python monitoring program is available in:

python/parking_monitor.py

### Python Dependency

Install the required serial communication library:

```bash
pip install pyserial
Before running the Python program, update the Arduino COM port in parking_monitor.py according to your system.

Example:

```python
PORT = "COM3"
BAUD_RATE = 9600
## Circuit Diagram

The circuit diagram shows the connection between the Arduino and IR sensors used for parking-slot detection.

![Circuit Diagram](circuit/circuit_diagram.svg)

## Project Status

The Smart Parking System prototype has been developed using Arduino, IR sensors, Embedded C, and Python. The system can detect parking-slot occupancy and display the current availability through the Python monitoring program.

## Future Enhancements

- Add an LCD display for showing parking availability.
- Add more parking slots and sensors.
- Develop a web or mobile dashboard for remote monitoring.
- Add cloud connectivity for real-time parking data.
- Implement automatic parking-slot reservation.
- Improve the system for large-scale parking areas.
