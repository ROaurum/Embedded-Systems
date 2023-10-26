#include "mbed.h"

DigitalIn ButtonB(PG_1); //Button A
DigitalOut redLED(PC_2); //Red Traffic 1

// main() runs in its own thread in the OS
int main()
{
    int btnB;
    // Turn OFF the red LED
    redLED = 0;

    while (true) {
    
        // Wait for the button to be pressed
        do {
            btnB = ButtonB; //Read button A
        } while (btnB == 0);


        //Toggle the red LED
        redLED = !redLED;

        //Wait for noise to settle
        wait_us(10000);

        // Wait for the button to be released
        do {
            btnB = ButtonB; //Read button A
        } while (btnB == 1);

        //Wait for noise to settle
        wait_us(10000);
    }
}

