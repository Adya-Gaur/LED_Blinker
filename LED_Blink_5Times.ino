//In this modification, LED blinks 5 times and then remains off
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}
void loop()
{
  for(int i=1; i<=5; i++)
  {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1000);
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);
  } 
  //After Blinking 5 times, stop doing anything
  while(true)
  { //This empty loop keeps the program running forever without repeating the blinks
  }
}
