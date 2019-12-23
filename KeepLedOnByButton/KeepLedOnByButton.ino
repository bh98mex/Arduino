const int LED = 13;
const int BUTTON = 7;

float val = 0;
float old_val = 0;
float state = 0;

void setup () {

pinMode(LED,OUTPUT);
pinMode(BUTTON, INPUT);
}

void loop (){

val = analogRead(BUTTON);

if( val == HIGH && old_val == LOW) {
state = 1-state;
delay (10);
}

old_val = val;

if ( state == 1)
analogWrite(LED,HIGH);
else
analogWrite(LED, LOW);
}
