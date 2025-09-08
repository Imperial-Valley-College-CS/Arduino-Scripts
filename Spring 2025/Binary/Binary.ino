//Array of pins
int pins[] = {2, 3, 4, 5, 6, 7, 8, 9};

void setup() {
  // put your setup code here, to run once:
  for( int i = 0; i < sizeof(pins); i++ )
  {
    pinMode( pins[i], OUTPUT );
  }
  displayNum( 43 );
  delay(2000);
  //turnPinsOff();
}

void loop() {
  // put your main code here, to run repeatedly:

}

void displayNum( int num )
{
  int i = 0;
  while( num > 0 )
  {
    int rem = num % 2;
    if( rem == 1 )
    {      
      digitalWrite( pins[i], HIGH );    
    }
    num /= 2;  
    i++;
  }  
}//end displayNum

void turnPinsOff()
{
  for( int i = 0; i < sizeof(pins); i++ )
  {
    digitalWrite( pins[i], LOW );
  }
}//end turnPinsOff
