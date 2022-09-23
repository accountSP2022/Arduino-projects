//fade one lightbulb

int brightness = 0;
int fade_by = 30;

void setup() {
  // put your setup code here, to run once:
pinMode(12, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
 analogWrite(12, brightness);

  brightness += fade_by;

  if(brightness < 0 || brightness > 255){
    fade_by = -fade_by;
  }
  delay(200);



  
}
