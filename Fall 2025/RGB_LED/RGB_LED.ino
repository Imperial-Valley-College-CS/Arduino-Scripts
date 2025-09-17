int redPin = A0;
int bluePin = A1;
int greenPin = A2;

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  setColor(255,0,0);
  delay(500);
  setColor(0,255,0);
  delay(500);
  setColor(0,0,255);
  delay(500);
}

void setColor(int red, int green, int blue)
{
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
}
