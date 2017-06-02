#include <wiringPi.h>
#include <stdio.h>

#define LEDRPin      4
#define LEDGPin      5
#define LEDBPin      6

int main(void )
{
    if(wiringPiSetup() == -1)
    {
        printf("Setup wirinPi Failed !\r\n");

        return 1;
    }

    pinMode(LEDRPin,OUTPUT);
    pinMode(LEDGPin,OUTPUT);
    pinMode(LEDBPin,OUTPUT);

    while(1)
    {
        digitalWrite(LEDRPin, HIGH);
        digitalWrite(LEDGPin, HIGH);
        digitalWrite(LEDBPin, HIGH);
        digitalWrite(LEDRPin, LOW);
        printf("Led R On...\r\n");
        delay(250);

        digitalWrite(LEDRPin, HIGH);
        digitalWrite(LEDGPin, HIGH);
        digitalWrite(LEDBPin, HIGH);
        digitalWrite(LEDGPin, LOW);
        printf("Led G On...\r\n");
        delay(250);

        digitalWrite(LEDRPin, HIGH);
        digitalWrite(LEDGPin, HIGH);
        digitalWrite(LEDBPin, HIGH);
        digitalWrite(LEDBPin, LOW);
        printf("Led B On...\r\n");
        delay(250);

        digitalWrite(LEDRPin, HIGH);
        digitalWrite(LEDGPin, HIGH);
        digitalWrite(LEDBPin, HIGH);
        digitalWrite(LEDRPin, LOW);
        digitalWrite(LEDGPin, LOW);
        digitalWrite(LEDBPin, LOW);
        printf("Leds RGB On...\r\n");
        delay(250);
    }

    return 0;
}

