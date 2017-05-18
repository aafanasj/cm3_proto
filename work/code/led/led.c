#include <wiringPi.h>
#include <stdio.h>

#define LEDPin      4

int main(void )
{
    if(wiringPiSetup() == -1)
    {
        printf("Setup wirinPi Failed !\r\n");

        return 1;
    }

    pinMode(LEDPin,OUTPUT);

    while(1)
    {
        digitalWrite(LEDPin, LOW);
        printf("Led On...\r\n");
        delay(500);

        digitalWrite(LEDPin, HIGH);
        printf("...Led Off\r\n");
        delay(500);

    }

    return 0;
}

