/* 
 Keyboard test
 
 Reads a byte from the serial port, sends a keystroke back.
 The sent keystroke is one higher than what's received, e.g.
 if you send a, you get b, send A you get B, and so forth.
 
 The circuit:
 * none
 
 created 21 Oct 2011
 by Tom Igoe
 
This example code is in the public domain.
 
 http://www.arduino.cc/en/Tutorial/KeyboardSerial
 */

void setup() {
  // open the serial port:
Serial.begin(9600);
}

void loop() {
  // check for incoming serial data:
  if (Serial.available() > 0) {
    // read incoming serial data:
    char inChar = Serial.read();
    // Type the next ASCII value from what you received:
    Keyboard.write(inChar+1);
  }  
}

