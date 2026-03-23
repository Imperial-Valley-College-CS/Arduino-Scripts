String message = "bro";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  printMessage();
}

void loop() {
  // put your main code here, to run repeatedly:

}

void printMessage()
{
  for( int i = 0; i < message.length(); i++ )
  {
    Serial.println( message.charAt(i) );
  }
}
