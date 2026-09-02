int v0, v1, v2, v3;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  v0 = analogRead(A0);
  v1 = analogRead(A1);
  v2 = analogRead(A2);
  v3 = analogRead(A3);
  Serial.print(v0*5.0/1023.0);
  Serial.print(v1*5.0/1023.0);
  Serial.print(v2*5.0/1023.0);
  Serial.println(v3*5.0/1023.0);
  delay(500);
}
