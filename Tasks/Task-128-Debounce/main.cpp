#include "mbed.h"

DigitalIn ButtonA(PG_0);                    //Button A
DigitalIn BlueButton(USER_BUTTON);          //Blue user button
DigitalOut redLED(PC_2);                    //Red Traffic 1

int main()
{
    redLED = 0;

    while (true) {

        wait_us(5000000);

        //Wait for a press
        while (ButtonA==0) { };

        wait_us(5000000);

        //Toggle LED
        redLED = !redLED;

        //Wait for release
        while (ButtonA==1) { };

        wait_us(5000000);
    }
}

