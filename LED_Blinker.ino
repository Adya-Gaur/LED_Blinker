//Default
//Using the inbuilt LED on Arduino Board
void setup()
{
  //initializing the LED on arduino Board as output
  pinMode(LED_BUILTIN, OUTPUT);
}
void loop()
{
  //infinite loop
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}
//LED remains on for 1 second and then turns off for a second 
