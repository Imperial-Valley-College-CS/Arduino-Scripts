int bttnPin = 4;
int bttnValue = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(bttnPin, INPUT);
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
  
}
