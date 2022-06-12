#include<Servo.h>

Servo Menula;

void setup() {
  Menula.attach(9);
  

}

void loop() {

  Menula.write(0);
  delay(1000);
  Menula.write(90);
  delay(1000);
  Menula.write(180);
  delay(1000);

}
