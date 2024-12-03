#define IR_PIN A0

void setup() {
  Serial.begin(9600); // Start serial communication
}

void loop() {
  int sensorValue = analogRead(IR_PIN); // Read sensor value
  // Convert to distance using sensor's datasheet formula
  float distance = 6787 / (sensorValue - 3) - 4; // Example formula for some IR sensors

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(1000); // Wait 1 second before next reading
}
