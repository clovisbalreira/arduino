int led = 8; //Define the LED pin
int buttonpin = 2; //Define the push button pin
int val; //Define a numeric variable

void setup()
{
  pinMode(led,OUTPUT);
  pinMode(buttonpin,INPUT);
}

void loop()
{
  val = digitalRead(buttonpin); // check the state of the button
  if(val==HIGH) // if button is pressed, turn LED on
  {
    digitalWrite(led,LOW);
  }
  else
  {
    digitalWrite(led,HIGH);
  }
}
