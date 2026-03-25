#include <Servo.h>

//create servo object
Servo myservo;

void setup() {
  // put your setup code here, to run once:
  myservo.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
  for( int deg = 0; deg <= 180; deg = deg + 5 )
  {
    myservo.write(deg);
    delay(100);
  }
  
}
