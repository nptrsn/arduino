/*
Second Project. Uses Digital Write
Light Modules
*/

int switchstate = 0;

void setup() {
  // declare the LED pins as outputs
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);

  // declare the switch pin as an input
  pinMode(2, INPUT);
}

void loop() {

  // read the value of the switch
  // digitalRead() checks to see if there is voltage

  switchstate = digitalRead(2);

 
  if (switchstate == LOW) {
    digitalWrite(3, HIGH); // 
    digitalWrite(4, LOW);  // 
    digitalWrite(5, LOW);  //
  }
  
  else {
    digitalWrite(3, LOW);  // turn the green LED on pin 3 off
    digitalWrite(4, LOW);  // turn the red LED on pin 4 off
    digitalWrite(5, HIGH); // turn the red LED on pin 5 on
   
    delay(500);
    digitalWrite(4, HIGH); // 
    digitalWrite(5, LOW);  //

    delay(500);
  }
}
