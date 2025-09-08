double voltageOne;

void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);    //input is for reading voltage at pin A0
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  voltageOne = 0.00488*analogRead(A0);
  Serial.print("Voltage at row 13: " );
  Serial.println( voltageOne );  
  delay(1000);
}
