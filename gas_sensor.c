/*
    Project name : Gas Sensor
    Modified Date: 10-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-gas-sensor
*/

#define GAS_PIN A0 // Analog pin connected to the gas sensor

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  int gasValue = analogRead(GAS_PIN); // Read gas sensor value
  
  Serial.print("Gas Sensor Value: ");
  Serial.println(gasValue); // Print gas sensor value to serial monitor
  
  delay(1000); // Delay for readability
}
