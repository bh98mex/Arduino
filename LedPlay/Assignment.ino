int trigPin = 2;    // Trigger
int echoPin = 3;    // Echo

 

void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT); //Pin 2 as INPUT
  pinMode(3, OUTPUT); //PIN 3 as OUTPUT

}

void loop() {
  // put your main code here, to run repeatedly:
   if (digitalRead(2) == HIGH) // check if PIR is triggered.

  {

  digitalWrite(3, HIGH);   // turn the LED/Buzz ON

  delay(100);                       // wait for 100 msecond

  digitalWrite(3, LOW);   // turn the LED/Buzz OFF

  delay(100);                       // wait for 100 msecond

  }
}
