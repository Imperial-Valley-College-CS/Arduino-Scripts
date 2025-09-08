int ledPin = 12;
int buttonPin = 2;

int ledState = LOW;
int buttonPress;

void setup() {
  // put your setup code here, to run once:
  pinMode( ledPin, OUTPUT );
  pinMode( buttonPin, INPUT );
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonPress = digitalRead(buttonPin);
  if( buttonPress == HIGH )
  {
    if( ledState == LOW )
    {
      digitalWrite(ledPin, HIGH);
      ledState = HIGH;
    }else if( ledState == HIGH )
    {
      digitalWrite(ledPin, LOW);
      ledState = LOW;
    }
  }
  delay(200);  
}
