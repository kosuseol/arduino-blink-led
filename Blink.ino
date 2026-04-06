void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT); //13 as the output pin
}

void loop() {
  // put your main code here, to run repeatedly:  
  digitalWrite(13, HIGH); //turn LED on
  delay(1000);            //wait 1 second
  digitalWrite(13, LOW);   //turn LED off
  delay(1000);            //wait 1 second     
}
