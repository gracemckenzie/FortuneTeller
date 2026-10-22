# FortuneTeller

## Grace’s Fortune Teller

‘Grace’s Fortune Teller’ is a physical computing project that functions as a fun, interactive psychic game. Bridging the circuit reveals your fortune, and opening it clears the screen.

###What you need:
Arduino Uno R3
USB-B cable
Breadboard
20x4 LCD screen with ribbon cable
Jumper wires (male-male)
Computer with Arduino IDE installed
Optional: Box enclosure

###How to run it:

Install Arduino IDE here to run the sketch: https://support.arduino.cc/hc/en-us/articles/360019833020-Download-and-install-Arduino-IDE 
Download the .ino file from the repository and open it in Arduino IDE.
Connect the Arduino Uno R3 to your laptop with a USB-B cable. If your laptop uses USB-C, use an adapter to connect to the Arduino.
Upload: Select the board (Arduino Uno) in Arduino IDE and the port in the Tools menu, then click Upload (the right-pointing arrow next to verify).
Find the orange jumper wire (replacing the tilt switch) on rows 29 and 30, column a, of the breadboard. When both ends are plugged into the board, a fortune will show on the LCD screen for 4 seconds, with a 2 second pause in-between fortunes. 
Take one jumper wire end out (does not matter which row) to clear the screen.

###Wiring:

Wire the circuit using the list below if you plan on building your own fortune teller:
LCD RS (pin 4) → Arduino pin 7
LCD E (pin 6) → Arduino pin 8
LCD D4 (pin 11) → Arduino pin 9
LCD D5 (pin 12) → Arduino pin 10
LCD D6 (pin 13) → Arduino pin 11
LCD D7 (pin 14) → Arduino pin 12
Tilt switch (or jumper wire) → Arduino pin 2
To ground (GND): LCD pins 1 (VSS), 3 (V0), 5 (RW) and 16 (K), and the other side of the switch or jumper wire.
To 5V: LCD pins 2 (VDD) and 15 (A).
Not connected: LCD pins 7 to 10 (D0 to D3).
