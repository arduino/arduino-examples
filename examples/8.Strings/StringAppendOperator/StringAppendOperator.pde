/*
  Appending to Strings using the += operator and concat()
 
 Examples of how to append different data types to strings
 
 created 27 July 2010
 by Tom Igoe
 
 This example code is in the public domain.
 */
String stringOne, stringTwo;

void setup() {
  Serial.begin(9600);
  stringOne = String("Sensor ");
  stringTwo = String("value");
  Serial.println("\n\nAppending to a string:");
}

void loop() {
  Serial.println(stringOne);  // prints  "Sensor "

  // adding a string to a string:
  stringOne += stringTwo;
  Serial.println(stringOne);  // prints "Sensor value"

  // adding a constant string to a string:
  stringOne += " for input ";
  Serial.println(stringOne);  // prints "Sensor value for input"

  // adding a constant character to a string:
  stringOne += 'A';
  Serial.println(stringOne);   // prints "Sensor value for input A"

  // adding a constant integer to a string:
  stringOne += 0;
  Serial.println(stringOne);   // prints "Sensor value for input A0"

  // adding a constant string to a string:
  stringOne += ": ";
  Serial.println(stringOne);  // prints "Sensor value for input"

  // adding a variable integer to a string:
  stringOne += analogRead(0);
  Serial.println(stringOne);   // prints "Sensor value for input A0: 456" or whatever analogRead(0) is

  Serial.println("\n\nchanging the Strings' values");
  stringOne = "A long integer: ";
  stringTwo = "The millis(): ";

  // adding a constant long integer to a string:
  stringOne += 123456789;
  Serial.println(stringOne);   // prints "A long integer: 123456789"

  // using concat() to add a long variable to a string:
  stringTwo.concat(millis());
  Serial.println(stringTwo); // prints "The millis(): 43534" or whatever the value of the millis() is

  // do nothing while true:
  while(true);
}