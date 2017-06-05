#!/bin/bash

echo "Start WIM services"

sudo /home/pi/projects/cm3_proto/work/code/led/led &
sudo /home/pi/projects/cm3_proto/work/code/beeper/beeper &
sudo /home/pi/projects/cm3_proto/work/code/button/button &
sudo /home/pi/projects/cm3_proto/work/code/pir/pir &

