int redPin = A0;
int bluePin = A1;
int greenPin = A2;
int redSensor = A3;
int greenSensor = A4;
int blueSensor = A5;
int redValue;
int greenValue;
int blueValue;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(redSensor, INPUT);
  pinMode(greenSensor, INPUT);
  pinMode(blueSensor, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  redValue = analogRead(redSensor);
  greenValue = analogRead(greenSensor);
  blueValue = analogRead(blueSensor);
  int red = map(redValue, 668, 860, 0, 255);
  int green = map(greenValue, 645, 877, 0, 255);
  int blue = map(blueValue, 607, 873, 0, 255);
  setColor(red, green, blue);
  delay(500);
//  Serial.print(redValue);Serial.print( ", " );
//  Serial.print(greenValue);Serial.print( ", " );
//  Serial.print(blueValue);
//  Serial.println();
}

void setColor(int red, int green, int blue)
{
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
}
