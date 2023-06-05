#define BLYNK_TEMPLATE_ID "TMPLA3Dl2bvh"
#define BLYNK_DEVICE_NAME "Home automation"
#define BLYNK_AUTH_TOKEN "bqBgUdX_UNz9gJPZyaHZlgHYFv-UjBTU"

#include <SPI.h>
#include <Ethernet.h>
#include <BlynkSimpleEthernet.h>

#define LED     2


char auth[] = BLYNK_AUTH_TOKEN;


BLYNK_WRITE(V0)
{
  int value = param.asInt();
  if (value)
  {
    digitalWrite(LED,1);
  }
  else
  {
    digitalWrite(LED,0);
  }
  
}

void setup() 
{
  pinMode(LED, OUTPUT);
  // put your setup code here, to run once:
  Blynk.begin(auth);
}

void loop() 
{
  // put your main code here, to run repeatedly:
   Blynk.run();

}
