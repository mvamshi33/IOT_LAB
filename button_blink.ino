const int buttonPin=2;
const int ledPin=13;

int buttonState=0;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT); 
}

// the loop function runs over and over again forever
void loop() {
buttonState = digitalRead(butonPin);

if(buttonState==HIGH){
  digitalWrite(ledPin, HIGH)
} else{
digitalWrite(ledPin, LOW);
}
}
