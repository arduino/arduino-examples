/*
  Adding Strings together
 
 Examples of how to add strings together
 You can also add several different data types to string, as shown here:
 
 created 27 July 2010
 by Tom Igoe
 
 This example code is in the public domain. 
 */

// declare three strings:
String stringOne, stringTwo, stringThree;

void setup() {
  Serial.begin(9600);
  stringOne = String("stringThree = ");
  stringTwo = String("this string");
  stringThree = String ();
  Serial.println("\n\nAdding strings together (concatenation):");
}

void loop() {
  // adding a constant integer to a string:
  stringThree =  stringOne + 123;
  Serial.println(stringThree);    // prints "stringThree = 123"

  // adding a constant long interger to a string:
  stringThree = stringOne + 123456789;
  Serial.println(stringThree);    // prints " You added 123456789"

  // adding a constant character to a string:
  stringThree =  stringOne + 'A';
  Serial.println(stringThree);    // prints "You added A"

  // adding a constant string to a string:
  stringThree =  stringOne +  "abc";
  Serial.println(stringThree);    // prints "You added abc"

  stringThree = stringOne + stringTwo;
  Serial.println(stringThree);    // prints "You added this string"

  // adding a variable integer to a string:
  int sensorValue = analogRead(0);
  stringOne = "Sensor value: ";
  stringThree = stringOne  + sensorValue;
  Serial.println(stringThree);    // prints "Sensor Value: 401" or whatever value analogRead(0) has

  // adding a variable long integer to a string:
  long currentTime = millis();
  stringOne="millis() value: ";
  stringThree = stringOne + millis();
  Serial.println(stringThree);    // prints "The millis: 345345" or whatever value currentTime has

  // do nothing while true:
  while(true);
}