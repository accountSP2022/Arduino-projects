void setup() {
  // put your setup code here, to run once:
pinMode(12, OUTPUT);//buzzerd
pinMode(11, INPUT_PULLUP); //button
pinMode(7, OUTPUT);//light
}

void loop() {
  // put your main code here, to run repeatedly:

if( digitalRead(11) == LOW )
{
  digitalWrite(12, HIGH);
  digitalWrite(7, HIGH);
}

else
{
  digitalWrite(12, LOW);
  digitalWrite(7, LOW);
}

}
