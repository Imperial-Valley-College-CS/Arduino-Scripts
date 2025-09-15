int num;
int leds[] = {2,3,4,5};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for(int i = 0; i < sizeof(leds); i++)
  {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  if( Serial.available() > 0 )    //Checks if number is entered to Serial monitor
  {
    turnLEDSoff();       //invoke function to turn off LEDS
    num = Serial.parseInt();    //read number from Serial monitor
    //Serial.println( num );
    int i = 0;
    while( num > 0 )
    {
      if( num % 2 == 1 )
      {
        digitalWrite(leds[i], HIGH);
      }
      num = num/2;
      i++;
    }
  }//end if
}//end loop

void turnLEDSoff()
{
  for(int i = 0; i < sizeof(leds); i++)
  {
    digitalWrite(leds[i], LOW);
  }
}
