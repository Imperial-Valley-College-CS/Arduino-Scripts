int bttnPin = 4;
int bttnValue = 0;
int leds[] = {2,3,4,5};

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
  //Serial.println( bttnValue );
  int h = 1;
  while( h < 16 )
  {
    dispBinary(h);
    h++;
    delay(1000);
  }
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
