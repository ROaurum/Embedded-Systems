#include "mbed.h"

PortOut lights(PortC, 0b0000000001001100);

int main()
{
    //All OFF
    lights = 0;

    while (true)
    {
        lights = 0b0000000000000100 + 0b0000000000001000; //red + yellow
        wait_us(1000000);
        lights = 0b0000000000001000 + 0b0000000001000000; //yellow + green
        wait_us(1000000);
        lights = 0b0000000001000000 + 0b0000000000000100; //green + red
        wait_us(1000000);                
    }
}