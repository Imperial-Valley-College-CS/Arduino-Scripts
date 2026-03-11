int bttnVal;
int ledPin = 13;
int bttnPin = 2;
int ledState = 0;   // off-0, on-1

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(bttnPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  bttnVal = digitalRead(bttnPin);   //read voltage at bttPin
  if( bttnVal == HIGH && ledState == 0 )
  {
    digitalWrite(ledPin, HIGH);
    ledState = 1;
  }else if(bttnVal == HIGH && ledState == 1)
  {
    digitalWrite(ledPin, LOW);
    ledState = 0;
  }
  delay(300);   //time to remove finger off button
}

void blinkLED( int pin, int dt)
{
    digitalWrite(pin,HIGH);
    delay(dt);
    digitalWrite(pin,LOW);
    delay(dt);
}
