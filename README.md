Smart Parking System
A simple smart parking prototype using Arduino, IR sensors, Embedded C, and Python to monitor parking-slot availability.

Project Overview
The system detects whether parking slots are occupied or vacant using IR sensors connected to an Arduino. The Arduino reads the sensor states and sends the slot information through serial communication. A Python program reads the serial data and displays the current parking availability.

Features
Real-time occupied/vacant slot detection
Arduino-based sensor monitoring
IR sensor interfacing through GPIO
Embedded C logic for reading sensor states
Python-based parking status display
Simple and low-cost prototype design
Technologies Used
Arduino
Embedded C / Arduino C
IR Sensors
GPIO
Python
Serial Communication
Components
Arduino Uno
IR sensors
LEDs (optional)
Jumper wires
Breadboard
USB cable
Working
IR sensors are placed at individual parking slots.
Each sensor detects whether a vehicle is present.
Arduino reads the sensor states through digital GPIO pins.
Arduino sends the slot status over serial communication.
The Python program receives the data and displays the availability.
Arduino Code
The Arduino program is available in arduino/smart_parking.ino.

Python Program
The Python monitoring program is available in python/parking_monitor.py.

Project Status
Prototype / educational project demonstrating embedded sensor interfacing and software-based parking monitoring.

Future Enhancements
Add more parking slots
Add LCD/OLED display
Add mobile/web dashboard
Add entry/exit gate control
Store parking data for analytics
