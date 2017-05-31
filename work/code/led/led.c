#include <wiringPi.h>
#include <stdio.h>

#define LEDRPin      4
#define LEDGPin      5
#define LEDBPin      6
#define BuzzerPin    8
#define ButtonPin    7
#define PIRPin       9

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

    pinMode(BuzzerPin,OUTPUT);

    pinMode(ButtonPin, INPUT);      // Set button as INPUT
//    pullUpDnControl(ButtonPin, PUD_UP); // Enable pull-up resistor on button

    pinMode(PIRPin, INPUT);      // Set button as INPUT

    while(1)
    {
        if(digitalRead(PIRPin) == 1)
        {
            digitalWrite(BuzzerPin, LOW);
            printf("Motion is detected\r\n");
            delay(100);
            digitalWrite(BuzzerPin, HIGH);
        }

        if(digitalRead(ButtonPin) == 0)
        {
            digitalWrite(BuzzerPin, LOW);
            printf("Button is pressed\r\n");
            delay(100);
            digitalWrite(BuzzerPin, HIGH);
        }

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

