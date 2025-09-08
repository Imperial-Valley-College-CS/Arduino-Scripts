int wait = 20;

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 13; i >= 9; i--)
  {
    blinkLED(i);
  }
}

void blinkLED( int pin )
{
  digitalWrite(pin, HIGH);
  delay(wait);
  digitalWrite(pin, LOW);
  delay(wait);
}
