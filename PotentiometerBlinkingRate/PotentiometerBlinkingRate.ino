int potpin = A0;  
int ledpin = 13;
int val;    
int lastChange; // the time of changing pin state
int state = HIGH;

void setup()
{
 pinMode(ledpin, OUTPUT);
 lastChange = millis();  // ledpin state changed NOW
 digitalWrite(ledpin, state);
}

void loop()
{
 val = map(analogRead(potpin), 0, 1023, 500, 5);  // read the value every time
 if (lastChange + val <= millis())
 {
      state = !state; // invert led's state
      lastChange = millis();  // ledpin state changed NOW
      digitalWrite(ledpin, state);
 }
 // you can add other functionality here ...
}  
