/* 
 Keyboard Button test
 
 Sends a text string when a button is pressed.
 
 The circuit:
 * pushbutton attached from pin 4 to +5V
 * 10-kilohm resistor attached from pin 4 to ground
 
 created 24 Oct 2011
 by Tom Igoe
 
 This example code is in the public domain.
 
 http://www.arduino.cc/en/Tutorial/KeyboardButton
 */

const int buttonPin = 4;          // input pin for pushbutton
int previousButtonState = HIGH;   // for checking the state of a pushButton
int counter = 0;                  // button push counter

void setup() {
  // make the pushButton pin an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the pushbutton:
  int buttonState = digitalRead(buttonPin);
  // if the button state has changed, 
  if ((buttonState != previousButtonState) 
  // and it's currently pressed:
    && (buttonState == HIGH)) {
      // increment the button counter
    counter++;
    // type out a message
    Keyboard.print("You pressed the button: ");
    Keyboard.print(counter); 
    Keyboard.println(" times.");
  }
  // save the current button state for comparison next time:
  previousButtonState = buttonState; 
}
