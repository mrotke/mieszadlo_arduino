#!/bin/bash
for i in {0..1}
do
for f in *.hex
do
/home/michal/Pobrane/arduino-1.8.5-linux64/arduino-1.8.5/hardware/tools/avr/bin/avrdude -C/home/michal/Pobrane/arduino-1.8.5-linux64/arduino-1.8.5/hardware/tools/avr/etc/avrdude.conf -v -patmega328p -carduino -P/dev/ttyUSB0 -b57600 -D -Uflash:w:$f:i
done
done
$SHELL