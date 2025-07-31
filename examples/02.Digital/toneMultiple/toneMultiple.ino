/*
  Multiple tone player

  Plays multiple tones on multiple pins in sequence

  circuit:
  - three 8 ohm speakers on digital pins 6, 7, and 8

  created 8 Mar 2010
  by Tom Igoe
  based on a snippet from Greg Borenstein

  This example code is in the public domain.

  https://docs.arduino.cc/built-in-examples/digital/toneMultiple/
*/

int buzzerOnePin = 6;
int buzzerTwoPin = 7;
int buzzerThreePin = 8;

void setup() {
}

void loop() {
  // turn off tone function for pin 8:
  noTone(buzzerThreePin);
  // play a note on pin 6 for 200 ms:
  tone(buzzerOnePin, 440, 200);
  delay(200);

  // turn off tone function for pin 6:
  noTone(buzzerOnePin);
  // play a note on pin 7 for 500 ms:
  tone(buzzerTwoPin, 494, 500);
  delay(500);

  // turn off tone function for pin 7:
  noTone(buzzerTwoPin);
  // play a note on pin 8 for 300 ms:
  tone(buzzerThreePin, 523, 300);
  delay(300);
}
