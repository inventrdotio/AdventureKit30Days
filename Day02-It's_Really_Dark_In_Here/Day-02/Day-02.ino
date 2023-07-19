/* [Any text between a slash/asterisk and an asterisk/slash is a comment and does not affect the code generated.]
 *
 * 30 Days - Lost in Space
 * Day 2 - It's Really Dark in Here
 *
 * Learn more at https://inventr.io/adventure
 *
 * A light-emitting diode (LED) is a semiconductor device that emits light
 * when an electric current is passed through it. LEDs are small, efficient,
 * and long-lasting, making them ideal for a wide range of applications such
 * as indicator lights, digital displays, and lighting. They are available
 * in a variety of colors and sizes.
 *
 * Alex Eschenauer
 * David Schmidt
 */

/*
 * Lesson concepts:
 * - Circuit (must be complete, no leaks)
 * - Current / Amperes
 * - Voltage / Volts
 * - Resistance / Ohms
 * - Ohms Law (Current = Voltage / Resistance)
 *
 * Arduino/HERO concepts:
 * - Breadboard
 * - 5V pins
 * - GND (Ground) pins
 *
 * Arduino language concepts introduced/documented in this lesson.
 * - Arduino language.  Based on C++.  Optimized for use with microcontrollers and providing a simplified programming
 *   interface for hardware-specific tasks.
 * - Block Comments (like this one)  (https://www.arduino.cc/reference/en/language/structure/further-syntax/blockcomment/)
 * - Single Line comments (https://www.arduino.cc/reference/en/language/structure/further-syntax/singlelinecomment/)
 * - #include (https://www.arduino.cc/reference/en/language/structure/further-syntax/include/)
 * - #define (https://www.arduino.cc/reference/en/language/structure/further-syntax/define/)
 * - const (https://www.arduino.cc/reference/en/language/variables/variable-scope-qualifiers/const/)
 * - pinMode() ()
 */

/*
 * #include is used to include code and defines from other files.  While Arduino automtically
 * includes "Arduino.h", other IDEs do not so it's a good idea to include it at the top of
 * all of your Arduino sketches.
 *
 * Incidently, when blink.ino used the constant LED_BUILTIN, that was defined when the Arduino IDE
 * automatically included Arduino.h.
 */
#include "Arduino.h"

/*
 * Yesterday we got the built in LED (LED_BUILTIN) to light up.  But that tiny LED won't light
 * up our ship.  Today we'll show how to connected up an external light (using the LED for
 * testing) so we'll need to use another pin on our HERO to turn on our lander's lights.
 *
 * In order to emphasize that these names are constants that cannot be change, they are
 * usually named with all capital letters.  While this isn't required, it's good practice
 * and helps emphasize that these values do not change while your code is running.
 *
 * We can give a name to our pin two different ways.  The easiest and most common way used
 * in most sketches that you'll see is to use #define.  However, #define can occasionally cause
 * odd compile problems AND it doesn't give you any hint what TYPE of data it defines.
 *
 * Better is to use "const", which allows us to define the TYPE of data represented, without
 * potential compile problems.  Here we'll show both so you can recognize them when you see
 * them.  They are both equivalent in this sketch so if you like you can uncomment the #define
 * (by removing the '//') and commenting out the "const" (by adding '//' to the beginning of
 * the line).
 */
// #define LANDER_LIGHTS_PIN 12           // The HERO Board Pin to wire to our LED
const uint8_t LANDER_LIGHTS_PIN = 12;  // The HERO Board Pin to wire to our LED

// the setup function runs once when you press reset or power the board
void setup() {

  pinMode(LANDER_LIGHTS_PIN, OUTPUT);     // set digital pin LANDER_LIGHTS_PIN as an output pin.
  digitalWrite(LANDER_LIGHTS_PIN, HIGH);  // Turn on ship's lights
}

// Since we turn on the ship's lights in setup(), there's nothing needed our loop().
void loop() {
}