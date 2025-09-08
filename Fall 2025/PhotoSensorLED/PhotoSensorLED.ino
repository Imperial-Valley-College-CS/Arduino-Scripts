int sensorPin = A0;
int ledPin = 12;
int sensorValue;
int ledState = LOW;

void setup() {
  // put your setup code here, to run once:
  pinMode(sensorPin,INPUT);
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);   //baud rate 
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = 0.00488*analogRead(sensorPin);   
  //Serial.println(sensorValue);
  if( sensorValue < 2.64 && ledState == LOW )
  {
    digitalWrite(ledPin, HIGH);   //turn on LED 
    ledState = HIGH; 
  }else if( sensorValue < 2.64 && ledState == HIGH )
  {
    digitalWrite(ledPin, LOW);    //turn off LED
    ledState = LOW;
  }
  delay(300);
}
