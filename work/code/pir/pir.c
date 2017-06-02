#include <wiringPi.h>
#include <stdio.h>

#define PIRPin       9

int main(void )
{
    if(wiringPiSetup() == -1)
    {
        printf("Setup wirinPi Failed !\r\n");

        return 1;
    }

    pinMode(PIRPin, INPUT);      // Set button as INPUT

    while(1)
    {
        if(digitalRead(PIRPin) == 1)
        {
            delay(100);

            if(digitalRead(PIRPin) == 1)
            {
                printf("Motion is detected\r\n");
            }
        }

        delay(100);
    }

    return 0;
}

