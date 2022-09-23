
void setup() {
  // put your setup code here, to run once:
pinMode(2, OUTPUT); //light
pinMode(6, INPUT_PULLUP); //on button
pinMode(7, INPUT_PULLUP); //off button
}

void loop() {
  // put your main code here, to run repeatedly:

  if( digitalRead(6) == LOW ) //on button pressed
  {
    digitalWrite(2, HIGH); //turn on light
  }

  if( digitalRead(7) == LOW ) //off button pressed
  {
    digitalWrite(2, LOW); //turn off light
  }

}
