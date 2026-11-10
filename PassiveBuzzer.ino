void setup() {                
  // initialize the digital pin as an output.
  pinMode(2, OUTPUT);     
}

void loop() {
   //The following code will generate a 2000HZ square wave
   digitalWrite(2, HIGH);   // set D2 HIGH
   delayMicroseconds(550);
   digitalWrite(2, LOW);    // set D2 LOW
   delayMicroseconds(550);
}