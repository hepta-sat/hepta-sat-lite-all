#include "mbed.h"

DigitalOut myled(LED1);

int main() {
  while(1) {
    myled = 1;
    wait(0.2);
    myled = 0;
    wait(0.2);
    //test
    //Lab1-02_create_satellite_program_step1_a
  }
}
