int redPin = A0;
int greenPin = A1;
int bluePin = A2;

void setup() {
  // put your setup code here, to run once:
  pM_OUT(redPin);
  pM_OUT(greenPin);
  pM_OUT(bluePin);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(redPin, 255);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, 0);
}

void pM_OUT( int pin )
{
    pinMode( pin, OUTPUT);
}
