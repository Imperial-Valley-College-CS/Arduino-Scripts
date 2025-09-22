#include <IRremote.h>
#include <Servo.h>
#define ON_OFF_KEY 0xFF629D
#define A_KEY 0xFF22DD

int sensorPin = 11;
int redPin = A0;
int greenPin = A1;
int bluePin = A2;

IRrecv irrecv(sensorPin);
decode_results results;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  irrecv.enableIRIn();  //start receiver
  pinMode(sensorPin, INPUT);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if( irrecv.decode(&results) ){
    //write code to turn RGB LED on (pick a color)
    if( results.value == ON_OFF_KEY )
    {
      setColor(80, 143, 4);
    }
    //write code to move servomotor
    Serial.println( results.value, HEX );
    irrecv.resume();    //resume receiver
  }  

  delay(500);
}

void setColor(int red, int green, int blue)
{
  analogWrite(redPin,red);
  analogWrite(greenPin,green);
  analogWrite(bluePin,blue);
}
