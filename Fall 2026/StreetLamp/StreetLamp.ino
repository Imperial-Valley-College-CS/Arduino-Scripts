int voltage;

void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  voltage = analogRead(A0);
  //Serial.println( voltage );
  if( voltage > 500 )
  {
    digitalWrite(13, LOW);
  }else
  {
    digitalWrite(13, HIGH);
  }
  
}
