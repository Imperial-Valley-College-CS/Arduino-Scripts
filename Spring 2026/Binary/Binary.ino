int ledPins[] = {13, 12, 11, 10};   //13-8 bit, 12-4 bit, 11-2 bit
String myName = "Octavio Ortiz";

void setup() {
  // put your setup code here, to run once:
  for( int x = 0; x < sizeof(ledPins); x++ )
  {
    pinMode(ledPins[x], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for( int x = 1; x <= 15; x++ )
  {
    displayBin(x);
    delay(1000);
    turnOFFLeds();
  }
}

void displayBin( int num )
{
  int x = 0;
  while( num > 0 )
  {
    if( num % 2 == 1 )
    {
      digitalWrite(ledPins[x], HIGH);
    }
    num = num/2;
    Serial.println(num);
    x++;
  }
}

void turnOFFLeds()
{
  for( int x = 0; x < sizeof( ledPins); x++ )
  {
    digitalWrite(ledPins[x], LOW);
  }
}
