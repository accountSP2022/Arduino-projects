#include <Servo.h>

Servo myservo;

void setup() {
  // put your setup code here, to run once:
myservo.attach(9); //orange pin digital
myservo.write(0); //start at 0 degrees
}

void loop() {
  // put your main code here, to run repeatedly:
myservo.write(0);
delay(500);
myservo.write(180);
delay(500); //windshield w

}
