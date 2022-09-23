
void setup() {
  // put your setup code here, to run once:
pinMode(2, OUTPUT); //blue
pinMode(3, OUTPUT); //green
pinMode(6, INPUT_PULLUP); //on&off button blue
pinMode(7, INPUT_PULLUP); //on&off green
}

void loop() {
  // put your main code here, to run repeatedly:

if( digitalRead(6) == LOW )
{
  digitalWrite(2, HIGH);
}
else
{
  digitalWrite(2, LOW);
}

if( digitalRead(7) == LOW )
{
  digitalWrite(3, HIGH);
}
else
{
  digitalWrite(3, LOW);
}
}
