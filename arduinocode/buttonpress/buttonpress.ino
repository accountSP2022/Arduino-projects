void setup() {
  // put your setup code here, to run once:
pinMode(2, OUTPUT); //light
pinMode(3, INPUT_PULLUP); //buttonpress
}

int buttonstate = 0; //variable of button status

void loop() {
  // put your main code here, to run repeatedly:
buttonstate = digitalRead(3);
if(buttonstate == LOW) //button pressed
{
   digitalWrite(2, HIGH); //if botton press, turn on light
}

else //buttonstate == HIGH button not press
{
  digitalWrite(2, LOW);
}
}
