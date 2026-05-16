// C++ code
//
#include <Servo.h>

const int analogInPin = A0; // Analog input pin that the potentiometer is attached to
const int analogOutPin = 9; // Analog output pin that the LED is attached to
int sensorValue = 0; // value read from the pot
int Angle1 = 0; // value output to the PWM (analog out)

Servo servo_9;

void setup()
{
Serial.begin(9600);// initialize serial communications at 9600 bps:

  servo_9.attach(9, 500, 2500);
}

void loop()
{
 // read the analog in value:
 sensorValue = analogRead(analogInPin);
 // map it to the range of the analog out:
 Angle1 = map(sensorValue, 0, 1023, 0, 179);

 // for the analog-to-digital converter to settle
 // after the last reading:



  servo_9.write(Angle1);
  delay(15); // Wait for 15 millisecond(s)

}