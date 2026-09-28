int b1 = 13;
int b2 = 12;
int spacePin = 11;
int dotDelay = 500;
int dashDelay = 3*dotDelay;

void setup() {
  // put your setup code here, to run once:
  pinMode(b1, OUTPUT);
  pinMode(b2, OUTPUT);
  pinMode(spacePin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  dash(); dot(); dot();
  space();
  dot(); dash();
  space();
  dash(); dot(); dot();
  
}

void dot()
{
  digitalWrite(b1,HIGH);
  digitalWrite(b2,HIGH);
  delay(dotDelay);
  digitalWrite(b1,LOW);
  digitalWrite(b2,LOW);
  delay(dotDelay);
}

void dash()
{
  digitalWrite(b1,HIGH);
  digitalWrite(b2,HIGH);
  delay(dashDelay);
  digitalWrite(b1,LOW);
  digitalWrite(b2,LOW);
  delay(dotDelay);
}

void space()
{
  digitalWrite(spacePin, HIGH);
  delay(dotDelay);
  digitalWrite(spacePin, LOW);
  delay(dotDelay);
}
