#include "ldr.h"
#include "Arduino.h"
#include "main.h"

void init_ldr(void)
{
   pinMode(GARDEN_LIGHT, OUTPUT);
   
}

unsigned input_value=0;

void brightness_control(void)
{
  //read the values from LDR sensor
   input_value = analogRead(LDR_SENSOR);
  //scale it down from (0 to 1023)to (255 to 0)
   input_value =  (1024 - input_value)/4;
   analogWrite (GARDEN_LIGHT, input_value);

   delay (1000);
}
