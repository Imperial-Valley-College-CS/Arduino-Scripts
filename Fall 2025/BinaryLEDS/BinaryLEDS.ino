int leds[] = {2,3,4,5};
int num = 11;

void setup() {
  // put your setup code here, to run once:
  for(int i = 0; i < sizeof(leds); i++)
  {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
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
