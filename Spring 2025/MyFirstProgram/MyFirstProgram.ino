int pin = 12;
int pin1 = 11;

void setup() {
  // put your setup code here, to run once:  
  pinMode(pin, OUTPUT);
  pinMode(pin1, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pin, HIGH);
  digitalWrite(pin1, HIGH);
  delay(1000);
  digitalWrite(pin, LOW);
  digitalWrite(pin1, LOW);
  delay(1000);
}
