
void setup() {
  // put your setup code here, to run once:
pinMode(12, OUTPUT); //blue
pinMode(11, OUTPUT); //green
pinMode(10, OUTPUT); //red

}

int red;
int green;
int blue;

void loop() {
  
  red = 0;
  green = 255; //start
  blue = 0;
for(int i = 0; i < 255; i+=4)
{
  green -= 1; 
  blue += 1;
  analogWrite(11, green);
  analogWrite(12, blue);
  delay(10);
}

  red = 0;
  green = 0; 
  blue = 255; //start
for(int i = 0; i < 255; i+=4)
{
  blue -= 1; 
   red += 1;
  analogWrite(12, blue);
  analogWrite(10, red);
  delay(10);
}

  red = 255;
  green = 0; //start
  blue = 0;
for(int i = 0; i < 255; i+=4)
{
  red -= 1; 
  green += 1;
  analogWrite(10, red);
  analogWrite(11, green);
  delay(10);
} 

}
