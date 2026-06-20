// C++ code
//
#include <Servo.h>

//potentiometer 1
const int analogInPin1 = A0; // Analog input pin that the potentiometer is attached to
const int analogOutPin1 = 9; // Analog output pin that the LED is attached to
//potentiometer 2
const int analogInPin2 = A1; // Analog input pin that the potentiometer is attached to
const int analogOutPin2 = 10; // Analog output pin that the LED is attached to
//potentiometer 3
const int analogInPin3 = A2; // Analog input pin that the potentiometer is attached to
const int analogOutPin3 = 11; // Analog output pin that the LED is attached to
//potentiometer 4
const int analogInPin4 = A3; // Analog input pin that the potentiometer is attached to
const int analogOutPin4 = 12; // Analog output pin that the LED is attached to

int sensorValue1 = 0; // value read from the pot
int Angle1 = 0; // value output to the PWM (analog out)
int sensorValue2 = 0; // value read from the pot
int Angle2 = 0; // value output to the PWM (analog out)
int sensorValue3 = 0; // value read from the pot
int Angle3 = 0; // value output to the PWM (analog out)
int sensorValue4 = 0; // value read from the pot
int Angle4 = 0; // value output to the PWM (analog out)

Servo servo_9;
Servo servo_10;
Servo servo_11;
Servo servo_12;

void setup()
{
  Serial.begin(9600); // initialize serial communications at 9600 bps:

  servo_9.attach(9, 500, 2500);
  servo_10.attach(10, 500, 2500);
  servo_11.attach(11, 500, 2500);
  servo_12.attach(12, 500, 2500);
}

void loop()
{
  //Servo1
  // read the analog in value:
  sensorValue1 = analogRead(analogInPin1);
  // map it to the range of the analog out:
  Angle1 = map(sensorValue1, 0, 1023, 0, 179);
  
  //Servo2
  // read the analog in value:
  sensorValue2 = analogRead(analogInPin2);
  // map it to the range of the analog out:
  Angle2 = map(sensorValue2, 0, 1023, 0, 179);
  
  //Servo3
  // read the analog in value:
  sensorValue3 = analogRead(analogInPin3);
  // map it to the range of the analog out:
  Angle3 = map(sensorValue3, 0, 1023, 0, 179);
  
  //Servo4
  // read the analog in value:
  sensorValue4 = analogRead(analogInPin4);
  // map it to the range of the analog out:
  Angle4 = map(sensorValue4, 0, 1023, 0, 179);

  servo_9.write(Angle1);
  servo_10.write(Angle2);
  servo_11.write(Angle3);
  servo_12.write(Angle4);

  delay(15); // Wait for 15 millisecond(s)
}