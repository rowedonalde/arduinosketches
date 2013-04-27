/**
 * robochatter.ino
 *
 * Cycles through 10 random notes every second
 *
 * Hardware:
 * 8ohm speaker on pin 8
 * Arduino Uno and better
 */

#include "pitches.h"
#include "stdlib.h"

int tone_output = 8;

void setup() {
}

void loop() {
  int note = rand() % NOTE_DS8;
  tone(tone_output, note, 100);
  delay(100);
}
