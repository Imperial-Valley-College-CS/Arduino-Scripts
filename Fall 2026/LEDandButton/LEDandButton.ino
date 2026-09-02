int led = 13;
int bttn = 2;
int bttnPressed;
int ledState = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(bttn, INPUT);
  Serial.begin(9600);   //establish communication with Serial monitor window
}

void loop() {
  // put your main code here, to run repeatedly:
  bttnPressed = digitalRead(bttn);
  Serial.println( bttnPressed );
  if(bttnPressed == 1 && ledState == 0)
  {
      digitalWrite(led, HIGH);
      ledState = 1;
  }else if(bttnPressed == 1 && ledState == 1)
  {
    digitalWrite(led,LOW);
    ledState = 0;
  }
  delay(200);
}
