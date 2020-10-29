int val = 0;

void setup()
{
  pinMode(0, OUTPUT);
}

void loop()
{
  val = analogRead(0);
  digitalWrite(0, HIGH);
  delay(val);
  digitalWrite(0, LOW);
  delay(val);
}