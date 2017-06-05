all: beeper.o button.o led.o pir.o

beeper.o: beeper/beeper.c
	gcc -o beeper/beeper.o beeper/beeper.c -lwiringPi

button.o: button/button.c
	gcc -o button/button.o button/button.c -lwiringPi

led.o: led/led.c
	gcc -o led/led.o led/led.c -lwiringPi

pir.o: pir/pir.c
	gcc -o pir/pir.o pir/pir.c -lwiringPi
