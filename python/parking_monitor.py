# Smart Parking System
# Reads parking status sent by Arduino through serial communication.

# Install pyserial if required:
# pip install pyserial

import serial

PORT = "COM3"       # Change this to your Arduino COM port
BAUD_RATE = 9600

try:
    arduino = serial.Serial(PORT, BAUD_RATE, timeout=1)
    print("Smart Parking Monitor Started")
    print("--------------------------------")

    while True:
        line = arduino.readline().decode("utf-8", errors="ignore").strip()

        if line:
            print(line)

except serial.SerialException:
    print("Could not open the serial port.")
    print("Check the Arduino COM port and make sure the board is connected.")
except KeyboardInterrupt:
    print("\nMonitoring stopped.")
