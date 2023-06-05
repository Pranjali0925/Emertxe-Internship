#include "temperature_system.h"
#include "Arduino.h"
#include "main.h"


void init_temperature_system(void)
{
    //setting heater and coller pins as output pins
    pinMode(HEATER,OUTPUT);
    pinMode(COOLER,OUTPUT);

    //initially turning off heater and cooler
    digitalWrite(HEATER,LOW);
    digitalWrite(COOLER,LOW);
    
}

float read_temperature(void)
{
    float temperature;
    temperature = (((analogRead(A1) *(float)5/ 1024)) /(float) 0.01);
    return temperature;
}

void cooler_control(bool control)
{
   digitalWrite(COOLER,control);
}
void heater_control(bool control)
{
  digitalWrite(HEATER,control);
    
}
