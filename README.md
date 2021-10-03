<p align="center">
  <img width="300" src="https://github.com/dmtzs/ArduinoTerrariumMonitoring/blob/master/BoaEsmeraldaAppOriginal.png">
  <h1 align="center" style="margin: 0 auto 0 auto;">Terrarrium monitoring app</h1>
  <h5 align="center" style="margin: 0 auto 0 auto;">Monitor the parameters of your terrarrium</h5>
</p>

<p align="center">
    <img src="https://img.shields.io/github/last-commit/dmtzs/ArduinoTerrariumMonitoring">
    <img src="https://img.shields.io/github/issues/dmtzs/ArduinoTerrariumMonitoring?label=issues">
    <img alt="GitHub top language" src="https://img.shields.io/github/languages/top/dmtzs/ArduinoTerrariumMonitoring">
    <img src="https://img.shields.io/github/stars/dmtzs/ArduinoTerrariumMonitoring">
</p>

<p align="center">
  <img src="https://img.shields.io/github/languages/code-size/dmtzs/ArduinoTerrariumMonitoring">
  <img alt="GitHub repo size" src="https://img.shields.io/github/repo-size/dmtzs/ArduinoTerrariumMonitoring">
  <img alt="Lines of code" src="https://img.shields.io/tokei/lines/github/dmtzs/ArduinoTerrariumMonitoring?label=total%20lines%20in%20repo">
  <img alt="GitHub language count" src="https://img.shields.io/github/languages/count/dmtzs/ArduinoTerrariumMonitoring">
</p>

# The project
 Arduino project in which a dht22 sensor is integrated for temperature and humidity detection, a water sensor along with a buzzer to monitor the terrarium of my pet, a snake.
 <br>
 You need to download the dht.h libary from adafruit but that is the only library that you need to download previously other libraries are already integrated in arduino´s IDE
 We will keep improving more the code in order to do more friendly the functionality

## Arduino program
The Arduino is used in order to acquire the parameters we want to show through the LCD that is humidity and temperature so you will not need to buy the analog humidity and temperature sensors that expensive and are not very precise, this is a modular solution for you.
<br>
The part of the water sensor level is not showed in the LCD, this is measured internally in order to let the arduino know when the arduino needs to turn on the buzzer.

### Installation, libraries and considerations
* First you need to use an Arduino uno board in order to use the same pins as the program, if not consider that you will need to change the default pins.
* You need the IDE of Arduino for upload the Arduino program to your board.
* You need to install from the IDE the dht.h library from adafruit in order to read the dht sensor and include it in the program.
* Include LiquidCrystal.h library for write in screen the temperature and humidity.
* If you´re using s linux distribution to upload the file to the Arduino remember to enable the permissions of writing over the USB port.
* The water level sensor has an analog output, verify the behaviour of your sensor and change the minimum value that corresponds to the variable named: valor in the part of the if´s.

## Sensor´s and materials list
* 16x2 LCD
* dht22 sensor
* Active buzzer
* Water level sensor HR0043 or similar
* 1 push button
* Arduino uno
* 10k potentiometer

<br>

## Connection diagram

![](Diagrama-de-conexion.png)
