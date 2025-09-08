int bttnPin = 4;
int ledPin = 12;
int sensorValue;
int ledState = LOW;

void setup() {
  // put your setup code here, to run once:
  pinMode(bttnPin,INPUT);
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);   //baud rate 
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = digitalRead(bttnPin);   //sensorValue will be 1 or 0
  //Serial.println(sensorValue);
  if( sensorValue == HIGH && ledState == LOW )
  {
    digitalWrite(ledPin, HIGH);   //turn on LED 
    ledState = HIGH; 
  }else if( sensorValue == HIGH && ledState == HIGH )
  {
    digitalWrite(ledPin, LOW);    //turn off LED
    ledState = LOW;
  }
  delay(300);
}
