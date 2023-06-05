#define LED    2

void setup() {
  // put your setup code here, to run once:
  //Set pin as output
  pinMode(LED,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  //Turn on LED
  digitalWrite(LED,HIGH);
  //Delay of 1 sec
  delay(1000);
  //Turn off LED
  digitalWrite(LED,LOW);
  //Delay of 1 sec
  delay(1000);


}
