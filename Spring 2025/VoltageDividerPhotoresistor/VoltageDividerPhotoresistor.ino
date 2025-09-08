int sensorPin = A3;

int voltageAtSensor;

void setup() {
  // put your setup code here, to run once:
  pinMode(sensorPin, INPUT); 
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  voltageAtSensor = analogRead(sensorPin);
  Serial.print("Voltage: ");
  Serial.println(voltageAtSensor);
}
