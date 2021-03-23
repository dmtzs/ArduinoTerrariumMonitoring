# ArduinoAguaDhtLCDBuzzer
 Arduino project in which a dht22 sensor is integrated for temperature and humidity detection, a water sensor along with a buzzer to monitor the terrarium of my pet, a snake
 
 You need to download the dht.h libary from adafruit but that is the only library that you need to download previously other libraries are already integrated in arduino´s IDE
 We will keep improving more the code in order to do more friendly the functionality

## Arduino program
The Arduino is used in order to acquire the parameters we want to show through the LCD that is humidity and temperature.
<br>
The part of the water sensor level is not showed in the LCD, this is measured internally in order to let the arduino know when the arduino needs to turn on the buzzer.

### Installation, libraries and considerations
* First you need to use an Arduino uno board in order to use the same pins as the program, if not consider that you will need to change the default pins.
* You need the IDE of Arduino for upload the Arduino program to your board.
* You need to install from the IDE the dht.h library from adafruit in order to read the dht sensor and include it in the program.
* Include LiquidCrystal.h library for write in screen the temperature and humidity.
* If you´re using s linux distribution to upload the file to the Arduino remember to enable the permissions of writing over the USB port.

## Sensor´s and materials list
* 16x2 LCD
* dht22 sensor
* Active buzzer
* Water level sensor HR0043 or similar
* 1 push button
* Arduino uno
* 10k potentiometer

<br>

## Conecction diagram

![](Diagrama-de-conexion.png)
