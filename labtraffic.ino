int pin_Red=12;
int pin_Yellow=10;
int pin_Green=6;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(pin_Red, OUTPUT);
  pinMode(pin_Yellow, OUTPUT);
  pinMode(pin_Green, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(pin_Red, HIGH);
  digitalWrite(pin_Yellow, LOW);
  digitalWrite(pin_Green, LOW);   
  delay(1000);   
                      
  digitalWrite(pin_Red, LOW);    
  digitalWrite(pin_Yellow, HIGH);
  digitalWrite(pin_Green, LOW);
  delay(1000);    
                     
  digitalWrite(pin_Red, LOW);    
  digitalWrite(pin_Yellow, LOW);
  digitalWrite(pin_Green, HIGH);    
  delay(1000);                     
}
