#include <Servo.h>
#include <IRremote.h>
#include <IRremoteInt.h>
#include <boarddefs.h>
#include <ir_Lego_PF_BitStreamEncoder.h>

#define ON_OFF_BTTN 0xFF629D
#define A_BTTN 0xFF22DD
#define UP_BTTN 0xFF9867

int IRsensor = 11;
int servoPin = 9;
int pos = 0;
IRrecv irrecv(IRsensor);
decode_results results;
Servo myservo;

void setup() {
  // put your setup code here, to run once:
  irrecv.enableIRIn();    //start receiver
  myservo.attach(servoPin);
  pinMode(IRsensor, INPUT); //configure pin 11 for INPUT
  Serial.begin(9600);
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if( irrecv.decode(&results) )
  {
      if( results.value == ON_OFF_BTTN )
      {
        controlRGB(255,0,0);
      }
      if(results.value == A_BTTN)
      {
        controlRGB(0,255,0);
      }
      if( results.value == UP_BTTN)
      {
        pos = pos+10;
        if( pos > 180 )
        {
          pos = 180;
        }
        myservo.write(pos);
      }
      Serial.println( results.value, HEX );
      irrecv.resume();
  }
                     
  delay(300);
}

void controlRGB(int r, int g, int b)
{
  analogWrite(A0, r);
  analogWrite(A1, g);
  analogWrite(A2, b);
}
