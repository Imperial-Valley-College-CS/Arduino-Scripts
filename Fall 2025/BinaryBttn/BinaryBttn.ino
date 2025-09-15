int bttnPin = 4;
int bttnValue = 0;
int leds[] = {2,3,4,5};
int h = 1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(bttnPin, INPUT);
  for(int i = 0; i < sizeof(leds); i++)
  {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  bttnValue = digitalRead(bttnPin);
  dispBinary(h);
  if( bttnValue == 1 )
  {
    h++;
  }
  delay(500);
  turnLEDSoff();
}

void dispBinary( int num )
{
  int i = 0;
  while( num > 0 )
  {
    if( num % 2 == 1 )
    {
      digitalWrite(leds[i], HIGH);
    }else
    {
      digitalWrite(leds[i], LOW);
    }
    num = num/2;
    i++;
  }
}

void turnLEDSoff()
{
  for(int i = 0; i < sizeof(leds); i++)
  {
    digitalWrite(leds[i], LOW);
  }
}
