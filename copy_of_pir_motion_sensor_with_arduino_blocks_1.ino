int buttonState = 0;

void setup()
{
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
  pinMode(4,INPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  buttonState = digitalRead(2);
  if (buttonState == HIGH) {
    digitalWrite(13, HIGH);
    delay(10); 
  } else {
    digitalWrite(13, LOW);
  }
  
   buttonState = digitalRead(4);
  if (buttonState == HIGH) {
    digitalWrite(12, HIGH);
    delay(20);
  } else
     {
    digitalWrite(12, LOW);
  }
}
