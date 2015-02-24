// Creating a basic thermometer
// Will serial print the current temperature, in intervals
// Displayed in Celcius and Fahernheit

// named constant for the pin the sensor is connected to
const int sensorPin = A0;
// room temperature in Celcius
const float baselineTemp = 20.0;

void setup() {
  Serial.begin(9600); //opening serial port
  
  
}
