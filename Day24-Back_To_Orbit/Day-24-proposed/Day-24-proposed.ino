/*
 * 30 Days - Lost in Space
 * Day 22 - Hello New World!
 *
 * Even our new OLED display is a bit small if we have large amounts of
 * information to display.  But this new display isn't limited to JUST
 * text!  It is a 128x64 pixel display and we can turn any of them on/off
 * to display whatever we like, including graphics.
 *
 * Today we'll run a "readiness check" on our new display to test out its
 * full capabilities.
 *
 * Learn more at https://inventr.io/adventure
 *
 * Alex Eschenauer
 * David Schmidt
 * Greg Lyzenga
 */

/*
 * Arduino concepts introduced/documented in this lesson.
 * - enum
 * - ternary operation
 *
 * Parts and electronics concepts introduced in this lesson.
 * - 
 */

// Explicitly include Arduino.h
#include "Arduino.h"
#include "Wire.h"

// Include file for 4 digit - 7 segment display library
#include <TM1637Display.h>

/*
 * Extensive documentation for this library can be found at https://github.com/olikraus/u8g2
 * for those wanting to dive deeper, but we will explain all of the functions
 * used in these lessons.
 */
#include <U8g2lib.h>  // Include file for the U8g2 library.

// Define macros to convert milliseonds to minutes or seconds, rounded UP to next second.
#define numberOfMinutes(_milliseconds_) (((_milliseconds_ + 999) / 1000) / 60)
#define numberOfSeconds(_milliseconds_) (((_milliseconds_ + 999) / 1000) % 60)

// Pin connections for our 4 digit counter
const byte COUNTER_DISPLAY_DIO_PIN = 4;
const byte COUNTER_DISPLAY_CLK_PIN = 5;
// Construct counter_display handle.
TM1637Display counter_display(COUNTER_DISPLAY_CLK_PIN, COUNTER_DISPLAY_DIO_PIN);

const byte THRUST_LEVER_PIN = 9;
const byte SYSTEMS_LEVER_PIN = 8;
const byte CONFIRM_LEVER_PIN = 7;

const byte BUZZER_PIN = 6;

/*
 * This constructor for our OLED differs from the one used for the previous
 * days, changing the "_F_" to "_2_".  This indicates that instead of using
 * a full sized buffer to draw to our OLED display a smaller, 256 byte buffer
 * will be used along with the firstPage()/nextPage() calls.  This gives us
 * more memory for other variables, though the display may update slower.
 */
U8G2_SH1106_128X64_NONAME_2_HW_I2C lander_display(U8G2_R0, /* reset=*/U8X8_PIN_NONE);

const byte LANDER_HEIGHT = 25;  // height of our lander image, in bits
const byte LANDER_WIDTH = 20;   // width of our lander image, in bits

// Define 7 Segment display values to spell out "dOnE"
const uint8_t DONE[] = {
  SEG_B | SEG_C | SEG_D | SEG_E | SEG_G,          // d
  SEG_A | SEG_B | SEG_C | SEG_D | SEG_E | SEG_F,  // O
  SEG_C | SEG_E | SEG_G,                          // n
  SEG_A | SEG_D | SEG_E | SEG_F | SEG_G           // E
};

// Define amount of time (in milliseconds) to count down.
const unsigned long COUNTDOWN_MILLISECONDS = 5 * 1000;

enum LIFTOFF_STATE {
  INIT,
  PENDING,
  COUNTDOWN,
  LIFTOFF,
  ABORT
};

// *********************************************
void setup() {
  Serial.begin(9600);

  // Configure counter display
  counter_display.setBrightness(7);  // Set maximum brightness (value is 0-7)
  counter_display.clear();           // Clear the display

  // Configure OLED display
  lander_display.begin();                     // Initialize OLED display
  lander_display.setFont(u8g2_font_6x10_tr);  // Set text font
  lander_display.setFontRefHeightText();
  lander_display.setFontPosTop();

  pinMode(THRUST_LEVER_PIN, INPUT);
  pinMode(SYSTEMS_LEVER_PIN, INPUT);
  pinMode(CONFIRM_LEVER_PIN, INPUT);

  lander_display.clearDisplay();
}

// *********************************************
const unsigned long MIN_LOOP_TIME = 200;  // minimum 200 ms time per loop
void loop() {
  // Initialize static variables first time through loop().  After first time
  // they will retain values between loop() executions.
  static unsigned long timeRemaining = COUNTDOWN_MILLISECONDS;
  static unsigned long countdown_start_time = 0;
  static enum LIFTOFF_STATE liftoff_state = COUNTDOWN; //INIT;
  static bool blink_state = true;

  unsigned long loop_start_time = millis();
  static unsigned long previous_loop_time = timeRemaining;

  // Serial.println(timeRemaining);  // Display milliseconds remaining on serial console
  // if (timeRemaining > 0) {
  //   Serial.print(timeRemaining);  // Display milliseconds remaining on serial console
  //   Serial.print(" (");
  //   Serial.print(previous_loop_time - timeRemaining);
  //   Serial.print(") ");
  //   Serial.println(liftoff_state);
  // }
  previous_loop_time = timeRemaining;

  byte thrust_lever = digitalRead(THRUST_LEVER_PIN);
  byte systems_lever = digitalRead(SYSTEMS_LEVER_PIN);
  byte confirm_lever = digitalRead(CONFIRM_LEVER_PIN);

  updateLanderDisplay(liftoff_state, thrust_lever, systems_lever, confirm_lever);

  if (liftoff_state == INIT) {
    if (blink_state) {
      tone(BUZZER_PIN, 100);
    } else {
      noTone(BUZZER_PIN);
    }

    if (!thrust_lever && !systems_lever && !confirm_lever) {
      noTone(BUZZER_PIN);
      liftoff_state = PENDING;
    }
  } else if (liftoff_state == PENDING) {
    if (thrust_lever && systems_lever && confirm_lever) {
      // blink the countdown on our timer before beginning the countdown
      for (int i = 0; i < 3; i++) {
        counter_display.clear();
        delay(200);
        displayCounter(COUNTDOWN_MILLISECONDS);
        delay(200);
      }
      countdown_start_time = millis();
      liftoff_state = COUNTDOWN;
    }
  } else if (liftoff_state == COUNTDOWN) {
    // Update our remaining time by subtracting the start time from current
    // execution time (in milliseconds).  If our elapsed time is greater
    // than our countdown time then set remaining time to 0.
    unsigned long elapsed_time = millis() - countdown_start_time;
    if (elapsed_time < COUNTDOWN_MILLISECONDS) {
      timeRemaining = COUNTDOWN_MILLISECONDS - elapsed_time;
    } else {
      timeRemaining = 0;
      liftoff_state = LIFTOFF;
    }
    // if any switch is turned off during countdown then we abort takeoff.
    if (!thrust_lever || !systems_lever || !confirm_lever) {
      liftoff_state = ABORT;
    }
    displayCounter(timeRemaining);  // Display minutes:seconds on counter display
  } else if (liftoff_state == LIFTOFF) {
    counter_display.setSegments(DONE);  // "dOnE" on our counter

    // Play TADA! tones followed by "liftoff rumble"
    tone(BUZZER_PIN, 300);
    delay(200);
    tone(BUZZER_PIN, 500);
    delay(400);
    tone(BUZZER_PIN, 38, 5000);

    // Animate final display forever.  This while loop runs until HERO is reset or
    // new code is uploaded.
    while (true) {
      updateLanderDisplay(liftoff_state, true, true, true);
    }
    // THIS LINE IS NEVER REACHED
  } else if (liftoff_state == ABORT) {
    tone(BUZZER_PIN, 100, 1000);
    delay(5000);           // show display for 5 seconds
    liftoff_state = INIT;  // set state back to INIT (waiting for all OFF)
  }

  unsigned long loop_time = millis() - loop_start_time;
  if (loop_time < MIN_LOOP_TIME) {
    delay(MIN_LOOP_TIME - loop_time);  // delay remaining time
  }

  blink_state = !blink_state;
}

// *********************************************

const byte MAX_LANDER_SPEED = 5;

void updateLanderDisplay(enum LIFTOFF_STATE liftoff_state,
                         bool thruster_lever,
                         bool systems_lever,
                         bool confirm_lever) {
  static int lander_height = lander_display.getDisplayHeight() - LANDER_HEIGHT;
  static byte current_lander_speed = 1;

  lander_display.firstPage();
  do {
    lander_display.setFontPosTop();
    byte y_offset = drawString(0, 0, "Exploration Lander");
    y_offset = drawString(0, y_offset, "Liftoff Sequence");

    if (liftoff_state == LIFTOFF) {
      const char LIFTOFF_TEXT[] = "Liftoff!";
      // Display liftoff in center of available space
      byte y_center = y_offset + ((lander_display.getDisplayHeight() - y_offset) / 2);
      // Serial.println(y_center);
      lander_display.setFontPosCenter();  // display text vertically centered
      static byte text_width = lander_display.getStrWidth(LIFTOFF_TEXT);
      static byte x_left = ((lander_display.getDisplayWidth() - LANDER_WIDTH) / 2) - (text_width / 2);
      lander_display.drawStr(x_left, y_center, LIFTOFF_TEXT);

      // Set height of lander image on screen to animate liftoff image, increasing speed
      // to MAX during liftoff.
      // if (lander_height > -LANDER_HEIGHT) {
      //   lander_height -= current_lander_speed;
      // } else {
      //   lander_height = lander_display.getDisplayHeight();  // start again at bottom of screen
      // }
      // if (current_lander_speed < MAX_LANDER_SPEED) {
      //   current_lander_speed += 1;
      // }
    } else if (liftoff_state == ABORT) {
      const char ABORT_TEXT[] = "ABORTED!";
      // Display liftoff in center of available space
      byte y_center = y_offset + ((lander_display.getDisplayHeight() - y_offset) / 2);
      // Serial.println(y_center);
      lander_display.setFontPosCenter();  // display text vertically centered
      static byte text_width = lander_display.getStrWidth(ABORT_TEXT);
      static byte x_left = ((lander_display.getDisplayWidth() - LANDER_WIDTH) / 2) - (text_width / 2);
      lander_display.drawStr(x_left, y_center, ABORT_TEXT);
    } else {
      // Set y_offset to point four lines above bottom of display
      y_offset = lander_display.getDisplayHeight() - (4 * lander_display.getMaxCharHeight());
      // Display last four lines
      y_offset = drawString(0, y_offset,
                            (String("Thrusters: ") + String(thruster_lever ? "ON" : "OFF")).c_str());
      y_offset = drawString(0, y_offset,
                            (String("Systems  : ") + String(systems_lever ? "ON" : "OFF")).c_str());
      y_offset = drawString(0, y_offset,
                            (String("Confirm  : ") + String(confirm_lever ? "ON" : "OFF")).c_str());

      // Set y_offset to display text at bottom of display.
      y_offset = lander_display.getDisplayHeight() - lander_display.getMaxCharHeight();
      drawString(0, y_offset, (String("Countdown ") + liftoffStateToString(liftoff_state)).c_str());
    }
    // Draw a picture of our lander on right side of display, starting at the bottom
    displayLander(lander_display.getDisplayWidth() - LANDER_WIDTH,
                  lander_height);
  } while (lander_display.nextPage());

  // Set height of lander image on screen to animate liftoff image, increasing speed
  // to MAX during liftoff.
  if (liftoff_state == LIFTOFF) {
    if (lander_height > -LANDER_HEIGHT) {
      lander_height -= current_lander_speed;
    } else {
      lander_height = lander_display.getDisplayHeight();  // start again at bottom of screen
    }
    if (current_lander_speed < MAX_LANDER_SPEED) {
      current_lander_speed += 1;
    }
  }
}

String liftoffStateToString(enum LIFTOFF_STATE liftoff_state) {
  switch (liftoff_state) {
    case INIT:
      return ("Init");
      break;
    case PENDING:
      return ("Pending");
      break;
    case COUNTDOWN:
      return ("Active");
      break;
    case LIFTOFF:
      return ("Complete");
      break;
    case ABORT:
      return ("ABORT");
      break;
  }
}

// Display milliseconds as minutes:seconds (MM:SS)
void displayCounter(unsigned long milliseconds) {
  // To display the countdown in mm:ss format, separate the parts
  byte minutes = numberOfMinutes(milliseconds);
  byte seconds = numberOfSeconds(milliseconds);

  // Display the minutes in the first two places, with colon
  counter_display.showNumberDecEx(minutes, 0b01000000, true, 2, 0);
  // This displays the seconds in the last two places
  counter_display.showNumberDecEx(seconds, 0, true, 2, 2);
}

// Draw test on our lander display at x, y, returning new y
// value that is immediately below the new line of text.
byte drawString(byte x, byte y, char *string) {
  lander_display.drawStr(x, y, string);
  return (y + lander_display.getMaxCharHeight());  // return new y_offset on display
}

// Draw an image of our lander drawn with frames and triangles
// at location x_location, y_location (relative to the upper left corner).
void displayLander(byte x_location, int y_location) {
  lander_display.drawFrame(x_location + 7, y_location, 6, 5);        // ship top
  lander_display.drawFrame(x_location + 5, y_location + 4, 10, 20);  // ship center
  lander_display.drawFrame(x_location, y_location + 6, 6, 16);       // left pod
  lander_display.drawFrame(x_location + 14, y_location + 6, 6, 16);  // right pod
  lander_display.drawTriangle(x_location + 2, y_location + 21,
                              x_location, y_location + 25,
                              x_location + 4, y_location + 25);  // left nozzle
  lander_display.drawTriangle(x_location + 18, y_location + 21,
                              x_location + 15, y_location + 25,
                              x_location + 20, y_location + 25);  // right nozzle
}
