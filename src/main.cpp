#include <Arduino.h>

#define ONBOARD_LED  2
 
void setup() {
  pinMode(ONBOARD_LED,OUTPUT);
}
 
void loop() {
  //délai de 1 seconde
  delay(1000);
  //allumage de la lumière bleue
  digitalWrite(ONBOARD_LED,HIGH);
  //délai de 0.1 seconde
  delay(100);
  //éteignage de la lumière bleue
  digitalWrite(ONBOARD_LED,LOW);
}
