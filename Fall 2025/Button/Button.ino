int ledPin = 12;
int sensorPin = 4;
int sensorValue = LOW;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
  pinMode(sensorPin,INPUT);
  Serial.begin(9600);         //allows arduino to communicate with device
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = digitalRead(sensorPin);

  if( sensorValue == HIGH )
  {
    Serial.println(sensorValue);
  }
  delay(500);
}
