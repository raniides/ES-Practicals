//Trafficx light
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(8, OUTPUT);
   pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {

  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  
  digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(5000);                       // wait for a second
  digitalWrite(8, LOW);    // turn the LED off by making the voltage LOW
  //delay(2000);  

    digitalWrite(9, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(6000);                       // wait for a second
  digitalWrite(9, LOW);    // turn the LED off by making the voltage LOW
  //delay(2000);  

    digitalWrite(10, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(5000);                       // wait for a second
  digitalWrite(10, LOW);    // turn the LED off by making the voltage LOW
  //delay(2000);    
}
