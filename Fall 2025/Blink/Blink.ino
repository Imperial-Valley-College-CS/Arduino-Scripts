int ledPin1 = 12;
int ledPin2 = 11;
int dt = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin1,OUTPUT);
  pinMode(ledPin2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin1,HIGH);
  digitalWrite(ledPin2,HIGH);
  delay(dt);
  digitalWrite(ledPin1,LOW);
  digitalWrite(ledPin2,LOW);
  delay(dt);
}
