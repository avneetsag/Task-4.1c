int a;
void setup() 
{
Serial.begin(9600);
pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  int b;
  b = analogRead(0);
  if  ( b < 300 )
  {
    digitalWrite(LED_BUILTIN, HIGH);
  Serial.println(b);
  }
  if  ( b > 300 )
  {
    digitalWrite(LED_BUILTIN, LOW);
  Serial.println(b);
  }
 
  
  
}
