int bttnVal;
int ledPin = 13;
int bttnPin = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(bttnPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  bttnVal = digitalRead(bttnPin);   //read voltage at bttPin
  if( bttnVal == HIGH )
  {
    blinkLED( ledPin, 1000 );
  }
}

void blinkLED( int pin, int dt)
{
    digitalWrite(pin,HIGH);
    delay(dt);
    digitalWrite(pin,LOW);
    delay(dt);
}
