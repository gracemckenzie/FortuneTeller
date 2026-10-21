// Modified from: Mellis, D. A., Fried, L., Igoe, T., & Guadalupi, A. (2016). LiquidCrystal library: Hello World [Example sketch]. Arduino IDE (Version 2.3.10). Arduino
// Modified from: Geddes, M. (2016). Arduino project handbook: 25 practical projects to get you started (Project 14: Fortune teller, pp. 117–123). No Starch Press.
// include the library code:
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 7, en = 8, d4 = 9, d5 = 10, d6 = 11, d7 = 12;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

// Pin the tilt switch is connected to.
const int switchPin = 2;

void setup() {
  // Modified from: Arduino. (2026, July 1). LiquidCrystal. Arduino Documentation. https://docs.arduino.cc/libraries/liquidcrystal/ 
  // Start the LCD and set up the switch.
  lcd.begin(20, 4);
 // Modified from: Arduino. (2026, February 14). pinMode(). Arduino Documentation. https://docs.arduino.cc/language-reference/en/functions/digital-io/pinMode/
  pinMode(switchPin, INPUT_PULLUP);
  // Modified from: Arduino. (2025, May 23). randomSeed(). Arduino Documentation. https://docs.arduino.cc/language-reference/en/functions/random-numbers/randomSeed/
  // Read an empty pin so the starting point for random is different each time
  randomSeed(analogRead(0));
}

void loop() {
  // If the switch is tilted, then a random fortune appears:
  if (digitalRead(switchPin) == LOW) {
    // Clear the screen to show a new fortune and remove the old one
    lcd.clear();
    // Modified from: Arduino. (2025, May 23). random(). Arduino Documentation. https://docs.arduino.cc/language-reference/en/functions/random-numbers/random/
    // Pick a random number for each of the 8 fortunes
    int Fortune = random(8);
    // Modified from: Arduino. (2024, May 21). switch...case. Arduino Documentation. https://docs.arduino.cc/language-reference/en/structure/control-structure/switchCase/
    // Look at the number and match it to the correct fortune
    switch (Fortune) {
      // Each case is a number with its fortune, and break stops the switch once its found its match
      case 0:
        lcd.print("Yes, definitely!");
        break;
      case 1:
        lcd.print("It does not matter!");
        break;
      case 2:
        lcd.print("You already know...");
        break;
      case 3:
        lcd.print("Trust your gut");
        break;
      case 4:
        lcd.print("NO!");
        break;
      case 5:
        lcd.print("Go touch grass");
        break;
      case 6:
        lcd.print("Maybe...");
        break;
      case 7:
        lcd.print("No comment");
        break;
    }
    // Modified from: Arduino. (2025, May 6). delay(). Arduino Documentation. https://docs.arduino.cc/language-reference/en/functions/time/delay/
    // Delay is how long a fortune shows on the screen - 4 seconds
    delay(4000);
    // Clears the screen before a new fortune appears
    lcd.clear();
    // Creates a small pause before new fortune appears
    delay(2000);
    // When the switch isn't tilted the screen is cleared to show nothing
  } else {
    lcd.clear();
  }
}