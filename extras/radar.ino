#include <Servo.h>  

/*
  radar

  Models a simple radar, with a HC-SR04 sensor on top of a 
  rotating pole. 

  REQUIREMENTS:
    - Servo.h library (dowloadable from the Arduino IDE Library Manager)
    - Servo motor
    - HC-SR04 sensor

  LINKING:
    servo: gnd, vcc, pin n.3
    HC-SR04: gnd, vcc, trig: pin n.6, echo: pin n.5

*/

#define servoPin 3
#define trigger 6  
#define echo 5 

Servo servo;

float calculateDistance();
void moveServo();

void setup() 
{
  Serial.begin(9600);
  servo.attach(servoPin);  

  pinMode(trigger, OUTPUT);
  digitalWrite(trigger, LOW);
  pinMode(echo, INPUT);

  servo.write(0);
  Serial.print("\nservo at 90°\n");
}

void loop() 
{
  moveServo();

  delay(100);
}

float calculateDistance()
{
  float time;

  digitalWrite(trigger, HIGH);
  delay(5);
  digitalWrite(trigger, LOW);

  time = pulseIn(echo, HIGH);  

  float distance = time * 0.034/2.0;

  Serial.println(distance);
  return distance;  
}

void moveServo()
{
  int n;
  for(n = 1; n < 180; n++)
  {
    servo.write(n);

    if(n % 4 == 0)
    {
      calculateDistance();
    }

    delay(25);
  }
  for(n = 179; n > 0; n--)
  {
    servo.write(n);

    if(n % 4 == 0)
    {
      calculateDistance();
    }

    delay(25);
  }
}