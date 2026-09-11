/*
 * Smart Parking System
 * Arduino + IR Sensors
 *
 * Example: 4 parking slots
 * LOW  = vehicle detected (typical IR sensor configuration)
 * HIGH = slot vacant
 */

const int sensorPins[] = {2, 3, 4, 5};
const int numberOfSlots = 4;

void setup() {
  Serial.begin(9600);

  for (int i = 0; i < numberOfSlots; i++) {
    pinMode(sensorPins[i], INPUT);
  }
}

void loop() {
  int available = 0;

  for (int i = 0; i < numberOfSlots; i++) {
    int sensorState = digitalRead(sensorPins[i]);

    if (sensorState == HIGH) {
      Serial.print("Slot ");
      Serial.print(i + 1);
      Serial.println(": VACANT");
      available++;
    } else {
      Serial.print("Slot ");
      Serial.print(i + 1);
      Serial.println(": OCCUPIED");
    }
  }

  Serial.print("AVAILABLE:");
  Serial.println(available);

  Serial.println("--------------------");
  delay(2000);
}
