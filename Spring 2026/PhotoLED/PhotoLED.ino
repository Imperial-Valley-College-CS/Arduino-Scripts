double sensorValue;
int sensorPin = A0;

void setup() {
  // put your setup code here, to run once:
  pinMode(sensorPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = (5.0/1023.0)*analogRead(sensorPin);
  Serial.println( sensorValue );
  delay(500);
}
