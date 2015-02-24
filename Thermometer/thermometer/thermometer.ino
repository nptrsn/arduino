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

void loop() {
  int sensorVal = analogRead(sensorPin);
  Serial.print("Sensor Value: ");
  Serial.print(sensorVal);
  //convert the sersnor into voltage
  float voltage = (sensorVal/1024.9) * 5.0;
  //print the voltage
  Serial.print(", Volts: ");
  Serial.print(voltage);
  //print the Celcius Temp
  Serial.print(", Celcius degrees: ");
  //convert the voltage to Celcius temperature
  float tempC = (voltage - .5) * 100;
  Serial.println(tempC);
  //convert the temp to Fahrenheit degrees
  float tempF = ((tempC * 9) / 5) + 32;
  float TempF = (tempC * 9/5) + 32;
  Serial.print(", Fahrenheit degrees: ");
  Serial.println(tempF);
  Serial.print(", second Temp F");
  Serial.println(TempF);
}
