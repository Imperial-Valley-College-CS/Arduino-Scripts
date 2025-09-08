int ledPin1 = 13;
int ledPin2 = 12;
int ledPin3 = 11;
int dotDelay = 500;         //500 milliseconds
int dashDelay = 3*dotDelay; //3 times dotDelay

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  a();
  space();
  a();
  space();
}

void dot(){
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  delay(dotDelay);
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
}

void dash(){
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  delay(dashDelay);
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
}

void space()
{
  digitalWrite(ledPin3, HIGH);
  delay(dashDelay);
  digitalWrite(ledPin3, LOW);
}

void a()
{
  dot();
  delay(dotDelay);
  dash();
}
