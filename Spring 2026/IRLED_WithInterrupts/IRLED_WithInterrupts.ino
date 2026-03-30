#include <TimerOne.h>
int irLED_pin = 8;
int sensorPin = 11;
int lightLevel;

void setup() {
  // put your setup code here, to run once:
  pinMode(irLED_pin, OUTPUT);
  pinMode(sensorPin, INPUT);
  Serial.begin(9600);
  Timer1.initialize(26);    //26 microseconds between interrupts
  Timer1.attachInterrupt(toggle);   //call toggle function on every interrupt
}

void loop() {
  // put your main code here, to run repeatedly:
  lightLevel = digitalRead(sensorPin);
  Serial.println(lightLevel);
  delay(300);
}

void toggle()
{
  digitalWrite( irLED_pin, digitalRead(irLED_pin)^1);
}
