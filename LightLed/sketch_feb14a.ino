
int pin1 =12;
int pin2 =13;
int pin3 = 3;
void setup() {
  // put your setup code here, to run once:
pinMode(pin1,OUTPUT);
pinMode(pin2,OUTPUT);
pinMode(pin3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(pin1,HIGH);
digitalWrite(pin3,HIGH);
delay(50);
digitalWrite(pin2,HIGH);
//digitalWrite(pin3,LOW);
delay(50);
digitalWrite(pin1,LOW);
delay(50);
//digitalWrite(pin3,HIGH);
digitalWrite(pin2,LOW);
delay(50);
}
