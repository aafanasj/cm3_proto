#include <wiringPi.h>
#include <stdio.h>

#define BuzzerPin    8

int main(void )
{
    if(wiringPiSetup() == -1)
    {
        printf("Setup wirinPi Failed !\r\n");

        return 1;
    }

    pinMode(BuzzerPin,OUTPUT);

    while(1)
    {
        delay(900);
        digitalWrite(BuzzerPin, HIGH);
        delay(100);
        digitalWrite(BuzzerPin, LOW);
    }

    return 0;
}


