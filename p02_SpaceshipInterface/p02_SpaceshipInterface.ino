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

  // read the value of the switch input
  // digitalRead() checks to see if there is voltage

  switchstate = digitalRead(2);

 
  if (switchstate == LOW) {
    digitalWrite(3, LOW); // 
    digitalWrite(4, HIGH);  // 
    digitalWrite(5, LOW);  //
  }
  
  else {
    digitalWrite(3, HIGH);  // turn pin 3's green LED off
    digitalWrite(4, HIGH);  // turn pin 4's green light off
    digitalWrite(5, LOW; // turn pin 5's red light off
   
    delay(1000);
    digitalWrite(4, LOW); // 
    digitalWrite(5, HIGH);  //

    delay(1000);
    
    delay(500);
    digitalWrite(4, LOW); // 
    digitalWrite(5, HIGH);  //
    
  }
}
//End of Loop
//Add Secondary Light panels below
