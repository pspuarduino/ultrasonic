
int timer = 1000;

int maximum = 0;
int 

int counter = 0;
int[] range = new int[];

#include "Ultrasonic.h"

// sensor connected to:
// Trig - 12, Echo - 13
Ultrasonic ultrasonic(12, 13);

void setup()
{
  Serial.begin(9600);                           // start the serial port
  pinMode(8, OUTPUT);
}

void findMax(){
  
}

void loop()
{
  float dist_cm = ultrasonic.Ranging(CM);       // get distance
  if(dist_cm < 60){
    timer = 1000;
    digitalWrite(8, LOW);
  }else{
    timer--;
  }
  if(timer <= 0){
    timer = 0;
    digitalWrite(8, HIGH);
  }

  Serial.println(dist_cm);
}
