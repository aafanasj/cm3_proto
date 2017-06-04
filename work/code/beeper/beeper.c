#include <wiringPi.h>
#include <stdio.h>

#define BuzzerPin    8

int main(void )
{
    if(wiringPiSetup() == -1)
    {
        printf("Beeper service failed !\r\n");

        return 1;
    }

    pinMode(BuzzerPin,OUTPUT);

    printf("Beeper service started !\r\n");

    while(1)
    {
        delay(900);
        digitalWrite(BuzzerPin, LOW);
        delay(100);
        digitalWrite(BuzzerPin, HIGH);
    }

    return 0;
}


