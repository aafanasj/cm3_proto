#include <wiringPi.h>
#include <stdio.h>

#define PIRPin       9

int main(void )
{
    if(wiringPiSetup() == -1)
    {
        printf("PIR service failed !\r\n");

        return 1;
    }

    pinMode(PIRPin, INPUT);      // Set button as INPUT

    printf("PIR service started !\r\n");

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

