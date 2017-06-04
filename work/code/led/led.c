#include <wiringPi.h>
#include <stdio.h>

#define LEDRPin      4
#define LEDGPin      5
#define LEDBPin      6

int main(void )
{
    if(wiringPiSetup() == -1)
    {
        printf("LED service failed !\r\n");

        return 1;
    }

    pinMode(LEDRPin,OUTPUT);
    pinMode(LEDGPin,OUTPUT);
    pinMode(LEDBPin,OUTPUT);

    printf("LED service started !\r\n");

    while(1)
    {
        digitalWrite(LEDRPin, HIGH);
        digitalWrite(LEDGPin, HIGH);
        digitalWrite(LEDBPin, HIGH);
        digitalWrite(LEDRPin, LOW);
        delay(250);

        digitalWrite(LEDRPin, HIGH);
        digitalWrite(LEDGPin, HIGH);
        digitalWrite(LEDBPin, HIGH);
        digitalWrite(LEDGPin, LOW);
        delay(250);

        digitalWrite(LEDRPin, HIGH);
        digitalWrite(LEDGPin, HIGH);
        digitalWrite(LEDBPin, HIGH);
        digitalWrite(LEDBPin, LOW);
        delay(250);

        digitalWrite(LEDRPin, HIGH);
        digitalWrite(LEDGPin, HIGH);
        digitalWrite(LEDBPin, HIGH);
        digitalWrite(LEDRPin, LOW);
        digitalWrite(LEDGPin, LOW);
        digitalWrite(LEDBPin, LOW);
        delay(250);
    }

    return 0;
}

