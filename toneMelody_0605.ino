/*
  Melody

  Plays a melody

  circuit:
  - 8 ohm speaker on digital pin 8

  created 21 Jan 2010
  modified 30 Aug 2011
  by Tom Igoe

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Tone
*/

#include "pitches.h"

// notes in the melody:
int melody[] = {//戀與
  NOTE_E4, NOTE_E5, NOTE_D5,NOTE_C5, NOTE_B4, NOTE_B4, NOTE_C5,NOTE_B4, NOTE_C5,NOTE_D5,NOTE_E5,0,
  NOTE_GS4,NOTE_GS4,NOTE_B4,NOTE_F5,NOTE_E5,NOTE_D5,NOTE_C5,NOTE_B4,NOTE_C5,NOTE_B4,0,NOTE_C5,NOTE_B4,
  NOTE_G6
  
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {//戀與
  4, 6, 6, 6, 6, 2, 1, 6, 6, 6, 1, 8,
  1, 6, 6, 6, 3, 3, 3, 3, 2, 1,8, 3, 3, 1,
};

int melody[] = {//第二
  NOTE_B4, NOTE_D5, NOTE_E5,NOTE_E5, NOTE_G5, NOTE_F5, NOTE_E5,NOTE_D5,0, NOTE_B4,NOTE_D5,NOTE_E5,
  NOTE_G5,NOTE_A5,NOTE_G5,NOTE_E5,NOTE_D5,
  NOTE_A5,NOTE_B5,NOTE_D6,NOTE_B5,NOTE_A5,NOTE_B5,NOTE_A5, NOTE_G5,NOTE_D5,
  NOTE_A5,NOTE_B5,NOTE_A5, NOTE_G5,NOTE_D5,NOTE_D5,
  NOTE_A5,NOTE_B5,NOTE_A5, NOTE_G5,NOTE_D5,NOTE_D5,
  NOTE_A5,NOTE_B5,NOTE_A5, NOTE_G5,NOTE_D5,
  
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  6, 6, 4, 6, 6, 4, 6, 1,8, 6, 6, 4, 
  6, 4, 4, 6, 1, 
  6, 6, 6, 6, 6,6, 6, 6, 4,
 6,6, 6, 6, 4,8,
 6,6, 6, 6, 1,8,
  6,6, 6, 6, 1,
 
};





void setup() {
  // iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < 44; thisNote++) {

    // to calculate the note duration, take one second divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(8, melody[thisNote], noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(8);
  }
}

void loop() {
  // no need to repeat the melody.
}
