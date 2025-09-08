int sensorPin = A0;   //will connect to photoresistor/resistance
int ledPin1 = 13;     //led pin for first LED
int value = 5;            //declared but not initialized

const double midValue = 2.4; //low reading plus high reading divided by 2
boolean ledState1 = false;    //initially LED is off

void setup() {
  // put your setup code here, to run once:
  pinMode( sensorPin, INPUT );
  pinMode( ledPin1, OUTPUT );
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  value = analogRead(sensorPin);
//  Serial.print("Voltage: ");
//  Serial.println( value*0.0048 );
//  delay(500);
  if( 0.0048*value < midValue && ledState1 == false )
  {
    digitalWrite( ledPin1, HIGH );
    ledState1 = true;
  }

}
