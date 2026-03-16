double sensorValue;
int sensorPin = A0;
double mid = 2.72;
int ledPin = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(sensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = (5.0/1023.0)*analogRead(sensorPin);
  if( sensorValue < mid )
  {
    digitalWrite( ledPin, HIGH );
  }else
  {
    digitalWrite( ledPin, LOW );
  }
  
  Serial.println( sensorValue );
  delay(500);
}
