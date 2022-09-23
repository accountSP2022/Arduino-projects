

int laststate= LOW;
int currentstate;

void setup() {
  // put your setup code here, to run once:
// initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
pinMode(4, INPUT_PULLUP);


}

void loop() {
  // put your main code here, to run repeatedly:

currentstate = digitalRead(4);

if( laststate == HIGH && currentstate == LOW)
{
  Serial.println("The button is pressed");
}
 if( laststate == LOW && currentstate == HIGH)
  { 
    Serial.println("The button is released");
  }

  laststate = currentstate;
}
