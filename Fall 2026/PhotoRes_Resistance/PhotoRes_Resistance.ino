double v2;
const double R2 = 10000.0;
const double Vs = 5.0;
double photoRes;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  v2 = analogRead(A0)*5.0/1023.0;
  Serial.println(v2);
  delay(500);
}
