#include <wiringPi.h>
#include <stdio.h>

#define ButtonPin    7

int main(void )
{
    if(wiringPiSetup() == -1)
    {
        printf("Button service failed !\r\n");

        return 1;
    }

    pinMode(ButtonPin, INPUT);      // Set button as INPUT
//    pullUpDnControl(ButtonPin, PUD_UP); // Enable pull-up resistor on button

    printf("Button service started !\r\n");

    while(1)
    {
        if(digitalRead(ButtonPin) == 0)
        {
            delay(100);

            if(digitalRead(ButtonPin) == 0)
            {
                printf("Button is pressed\r\n");
            }
        }

        delay(100);
    }

    return 0;
}


