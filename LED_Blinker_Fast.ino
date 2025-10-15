//Modifying the default 1 second LED blinker. 
//LED blinks fast, remains on for 3 seconds then turns off for 2 seconds. This continues till the program runs.
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}
void loop()
{
  for(int i=1; i<=5; i++)
  {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(500);
    digitalWrite(LED_BUILTIN, LOW);
    delay(500);
    //This loop turns led on and off 5 times for 0.5s each time
  }
  digitalWrite(LED_BUILTIN, HIGH);
  delay(3000); //Keeps LED on for 3s
  digitalWrite(LED_BUILTIN, LOW);
  delay(2000); //Keeps LED off for 2s
}
