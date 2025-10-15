//Default-Using the inbuilt LED on Arduino Board
void setup() //this function runs only once when the Arduino board is started or reset
{
  //pinMode- tells Arduino whether a pin is going to recieve a signal(INPUT from sensors) or send a signal(OUTPUT to actuators). 
  //Initializing the LED on arduino Board as output
  pinMode(LED_BUILTIN, OUTPUT);
}
void loop()
{
  //infinite loop
  //digitalWrite - function for sending signals(Digital)
  //dugitalRead(pin) and analogRead(pin) are for receiving signals
  digitalWrite(LED_BUILTIN, HIGH); //HIGH => High voltage => LED glows
  delay(1000); // LED glows for 1 second. 1000ms = 1s
  digitalWrite(LED_BUILTIN, LOW); //LOW => Low voltage => LED turns off
  delay(1000);
}
//LED remains on for 1 second and then turns off for a second 
