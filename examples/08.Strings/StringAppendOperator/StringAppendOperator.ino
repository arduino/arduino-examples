/*
  Appending to Strings using the += operator and concat()

  Examples of how to append different data types to Strings

  created 27 Jul 2010
  modified 2 Apr 2012
  by Tom Igoe

  This example code is in the public domain.

  https://docs.arduino.cc/built-in-examples/strings/StringAppendOperator/
*/

String stringOne, stringTwo;

void setup() {
  // Open serial communications and wait for port to open:
  Serial.begin(9600);
  while (!Serial) {
    ;  // wait for serial port to connect. Needed for native USB port only
  }

  stringOne = String("Sensor ");
  stringTwo = String("value");
  // send an intro:
  Serial.println("\n\nAppending to a String:");
  Serial.println();
}

void loop() {
  Serial.println(stringOne);  // prints  "Sensor "

  // adding a string to a String:
  stringOne += stringTwo;
  Serial.println(stringOne);  // prints "Sensor value"

  // adding a constant string to a String:
  stringOne += " for input ";
  Serial.println(stringOne);  // prints "Sensor value for input"

  // adding a constant character to a String:
  stringOne += 'A';
  Serial.println(stringOne);  // prints "Sensor value for input A"

  // adding a constant integer to a String:
  stringOne += 0;
  Serial.println(stringOne);  // prints "Sensor value for input A0"

  // adding a constant string to a String:
  stringOne += ": ";
  Serial.println(stringOne);  // prints "Sensor value for input"

  // adding a variable integer to a String:
  stringOne += analogRead(A0);
  Serial.println(stringOne);  // prints "Sensor value for input A0: 456" or whatever analogRead(A0) is

  Serial.println("\n\nchanging the Strings' values");
  stringOne = "A long integer: ";
  stringTwo = "The millis(): ";

  // adding a constant long integer to a String:
  stringOne += 123456789;
  Serial.println(stringOne);  // prints "A long integer: 123456789"

  // using concat() to add a long variable to a String:
  stringTwo.concat(millis());
  Serial.println(stringTwo);  // prints "The millis(): 43534" or whatever the value of the millis() is

  #if ARDUINO_API_VERSION >= 10000
  // using concat with an explicit length argument to add only a part of
  // a string:
  stringOne = "Only part: ";
  char *to_add = "use this but not this";
  stringOne.concat(to_add, 8);
  Serial.println(stringOne);   // prints "Only part: use this"

  // using concat with an explicit length argument to add a
  // non-zero-terminated string / char array (note that it will be
  // terminated inside the String object).
  stringTwo = "Unterminated: ";
  char unterminated[] = {'n', 'o', 'n', 'u', 'l'};
  stringTwo.concat(unterminated, sizeof(unterminated));
  Serial.println(stringTwo); // prints "Unterminated: nonul"
  #endif // ARDUINO_API_VERSION

  // do nothing while true:
  while (true)
    ;
}
