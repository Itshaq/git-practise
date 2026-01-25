// C++ code
const int RED = 12;
const int GREEN = 11;
void setup()
{ 
  pinMode(GREEN, OUTPUT);
  pinMode(RED, OUTPUT);
}

void loop()
{
  digitalWrite(GREEN, LOW); //turns the Green Led off
  digitalWrite(RED, HIGH); //turns the Red Led on
  delay(1000); //waits 1000 miliseconds 
  digitalWrite(GREEN, HIGH); //turns the Green Led on
  digitalWrite(RED, LOW); //turns the Red Led off
  delay(1000); //waits 1000 milliseconds
}