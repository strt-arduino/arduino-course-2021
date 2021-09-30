void setup() 
{
  for (int thisPin = 0; thisPin <= 9; thisPin++)
  {
    pinMode(thisPin, OUTPUT);
  }  
}

void loop()
{
  for (int thisPin = 0; thisPin <= 9; thisPin++)
  {
    digitalWrite(thisPin, HIGH);
    delay(100);
    digitalWrite(thisPin, LOW);
  }
}
