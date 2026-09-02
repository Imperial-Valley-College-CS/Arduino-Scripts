int voltage;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  voltage = analogRead(A0);
  Serial.println( voltage*5.0/1023.0);
  delay(500);
}
