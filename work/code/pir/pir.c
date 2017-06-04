#include <wiringPi.h>
#include <stdio.h>

#define PIRPin       9

int main(void )
{
    int is_motion_detected = FALSE;

    if(wiringPiSetup() == -1)
    {
        printf("PIR service failed !\r\n");

        return 1;
    }

    pinMode(PIRPin, INPUT);      // Set button as INPUT

    printf("PIR service started !\r\n");

    while(1)
    {
        if(digitalRead(PIRPin) == 1 && is_motion_detected != TRUE)
        {
            delay(100);

            if(digitalRead(PIRPin) == 1)
            {
                is_motion_detected = TRUE;

                printf("Motion is detected\r\n");
            }
        }
        else
        {
            is_motion_detected = FALSE;
        }

        delay(100);
    }

    return 0;
}

