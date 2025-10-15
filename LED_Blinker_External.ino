//Modifying the default 1s LED blinker
//Difference- This modification uses an externally connected LED light instead of the one builtin on Arduino Board
//Setup- Connected LED's long leg(+) to a digital pin(pin no. 7) and short leg(-) to 220 ohm resistor, which in turn is connected to GND(ground) pins of Arduino board
int ledPin = 7; //Using Pin no. 7 for the external LED
void setup()
{
  pinMode(ledPin, OUTPUT) //Set LED pin as output
}
void loop()
{
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(1000);
}
//The external LED will Blink with time period of 2s
