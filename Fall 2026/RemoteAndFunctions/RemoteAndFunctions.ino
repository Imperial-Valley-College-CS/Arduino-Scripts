#include <IRremote.h>
#include <IRremoteInt.h>
#include <boarddefs.h>
#include <ir_Lego_PF_BitStreamEncoder.h>

int IRsensor = 11;
IRrecv irrecv(IRsensor);
decode_results results;

void setup() {
  // put your setup code here, to run once:
  irrecv.enableIRIn();    //start receiver
  pinMode(IRsensor, INPUT); //configure pin 11 for INPUT
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if( irrecv.decode(&results) )
  {
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