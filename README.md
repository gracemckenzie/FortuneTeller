# Grace's Fortune Teller

'Grace's Fortune Teller' is a physical computing project that works as a fun, interactive psychic game. Touching two wire ends together closes the circuit and reveals your fortune. Pulling them apart clears the screen.

## What you need:

* Arduino Uno Rev3
* USB-B cable
* Breadboard
* 20x4 LCD screen with ribbon cable
* Jumper wires (male-male), plus two male-to-female jumper wires for the switch
* Computer with the Arduino IDE installed
* LiquidCrystal library (built into the Arduino IDE, so you don't need to install it)
* Optional: box enclosure and tape to display the LCD screen

## How to run it:

1. Install the Arduino IDE to run the sketch: https://support.arduino.cc/hc/en-us/articles/360019833020-Download-and-install-Arduino-IDE
2. Download the .ino file from the Grace_FortuneTeller_FINAL folder in the GitHub repository and open it in the Arduino IDE.
3. Connect the Arduino Uno Rev3 to your computer with a USB-B cable. If your computer only has USB-C, use an adapter.
4. Select the board (Arduino Uno) and the port in the Tools menu, then click Upload (the right-pointing arrow next to Verify).
5. Find the two jumper wires that connect to rows 29 and 30, column a, of the breadboard. Each is extended with a male-to-female wire, so the two loose ends come out of the box.
6. Touch the two loose ends together. A fortune shows on the LCD screen for 4 seconds, with a 2 second pause between fortunes.
7. Pull the ends apart to clear the screen.

If the Arduino IDE says it cannot find LiquidCrystal, go to Sketch > Include Library > Manage Libraries, search for "LiquidCrystal" and install it.

## Wiring:

Wire the circuit using the list below if you want to build your own fortune teller:

* LCD RS (pin 4) → Arduino pin 7
* LCD E (pin 6) → Arduino pin 8
* LCD D4 (pin 11) → Arduino pin 9
* LCD D5 (pin 12) → Arduino pin 10
* LCD D6 (pin 13) → Arduino pin 11
* LCD D7 (pin 14) → Arduino pin 12
* Switch (the two touching wires): one wire → Arduino pin 2, the other wire → GND
* To ground (GND): LCD pins 1 (VSS), 3 (V0), 5 (RW) and 16 (K). There is no potentiometer in this build.
* To 5V: LCD pins 2 (VDD) and 15 (A)
* Not connected: LCD pins 7 to 10 (D0 to D3)

## Photos:

![Top view of the build](photos/top-view.jpg)

Top view of the build: Arduino Uno Rev3, breadboard, and the LCD wired with the ribbon cable.

![Front view with the wire ends apart](photos/front-view.jpg)

Front view with the wire ends apart: the screen is clear.

![A fortune showing on the LCD](photos/fortune.jpg)

A fortune showing on the LCD while the wire ends touch.

## References:

The code was modified from the sources credited in the comments at the top of the sketch, and next to the lines they relate to.

Mellis, D. A., Fried, L., Igoe, T., & Guadalupi, A. (2016). LiquidCrystal library: Hello World [Example sketch]. Arduino IDE (Version 2.3.10). Arduino.

Geddes, M. (2016). Arduino project handbook: 25 practical projects to get you started (Project 14: Fortune teller, pp. 117–123). No Starch Press.

Arduino. (2026, July 1). LiquidCrystal. Arduino Documentation. https://docs.arduino.cc/libraries/liquidcrystal/

Arduino. (2026, February 14). pinMode(). Arduino Documentation. https://docs.arduino.cc/language-reference/en/functions/digital-io/pinMode/

Arduino. (2025, May 23). randomSeed(). Arduino Documentation. https://docs.arduino.cc/language-reference/en/functions/random-numbers/randomSeed/

Arduino. (2025, May 23). random(). Arduino Documentation. https://docs.arduino.cc/language-reference/en/functions/random-numbers/random/

Arduino. (2024, May 21). switch...case. Arduino Documentation. https://docs.arduino.cc/language-reference/en/structure/control-structure/switchCase/

Arduino. (2025, May 6). delay(). Arduino Documentation. https://docs.arduino.cc/language-reference/en/functions/time/delay/


