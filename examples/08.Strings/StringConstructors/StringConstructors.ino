/*
  String constructors

  Examples of how to create Strings from other data types

  created 27 Jul 2010
  modified 30 Aug 2011
  by Tom Igoe

  This example code is in the public domain.

  https://docs.arduino.cc/built-in-examples/strings/StringConstructors/
*/

void setup() {
  // Open serial communications and wait for port to open:
  Serial.begin(9600);
  while (!Serial) {
    ;  // wait for serial port to connect. Needed for native USB port only
  }

  // send an intro:
  Serial.println("\n\nString Constructors:");
  Serial.println();
}

void loop() {
  // using a constant String:
  String stringOne = "Hello String";
  Serial.println(stringOne);  // prints "Hello String"

  // converting a constant char into a String:
  stringOne = String('a');
  Serial.println(stringOne);  // prints "a"

  // converting a constant string into a String object:
  String stringTwo = String("This is a string");
  Serial.println(stringTwo);  // prints "This is a string"

  // concatenating two strings:
  stringOne = String(stringTwo + " with more");
  // prints "This is a string with more":
  Serial.println(stringOne);

  // using a constant integer:
  stringOne = String(13);
  Serial.println(stringOne);  // prints "13"

  // using an int and a base:
  stringOne = String(analogRead(A0), DEC);
  // prints "453" or whatever the value of analogRead(A0) is
  Serial.println(stringOne);

  // using an int and a base (hexadecimal):
  stringOne = String(45, HEX);
  // prints "2d", which is the hexadecimal version of decimal 45:
  Serial.println(stringOne);

  // using an int and a base (binary)
  stringOne = String(255, BIN);
  // prints "11111111" which is the binary value of 255
  Serial.println(stringOne);

  // using a long and a base:
  stringOne = String(millis(), DEC);
  // prints "123456" or whatever the value of millis() is:
  Serial.println(stringOne);

  // using a float and the right decimal places:
  stringOne = String(5.698, 3);
  Serial.println(stringOne);

  // using a float and less decimal places to use rounding:
  stringOne = String(5.698, 2);
  Serial.println(stringOne);

  #if ARDUINO_API_VERSION >= 10000
  // Using an explicit length argument to to use only a part of a
  // string:
  char *to_add = "use this but not this";
  stringOne = String(to_add, 8);
  Serial.println(stringOne);   // prints "use this"

  // using explicit length argument to add a non-zero-terminated string
  // / char array (note that it will be terminated inside the String
  // object).
  char unterminated[] = {'n', 'o', 'n', 'u', 'l'};
  stringTwo = String(unterminated, sizeof(unterminated));
  Serial.println(stringTwo); // prints "nonul"
  #endif // ARDUINO_API_VERSION

  // do nothing while true:
  while (true)
    ;
}
