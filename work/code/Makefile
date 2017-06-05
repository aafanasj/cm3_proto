all: beeper button led pir

beeper: /beeper/beeper.c
	gcc -o beeper/beeper beeper/beeper.c -lwiringPi

button: /button/button.c
	gcc -o button/button button/button.c -lwiringPi

led: /led/led.c
	gcc -o led/led led/led.c -lwiringPi

pir: /pir/pir.c
	gcc -o pir/pir pir/pir.c -lwiringPi
