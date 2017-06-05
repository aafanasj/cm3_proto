#!/bin/bash

echo "***Start WIM services***"

sudo /home/pi/projects/cm3_proto/work/code/led/led.o &
sudo /home/pi/projects/cm3_proto/work/code/beeper/beeper.o &
sudo /home/pi/projects/cm3_proto/work/code/button/button.o &
sudo /home/pi/projects/cm3_proto/work/code/pir/pir.o &

