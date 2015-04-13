/*
	ardpi.c++ - Source File for info on motor class 
	Created by Dan Woolsey
	Released into the public domain
*/

#include "Arduino.h" // use the Arduino header file
#include "ardpi.h" // include the arpi header file

motors::motors(int m1a, int m1b, int m2a, int m2b) // setup a motors class with 4 pins
{
    pinMode(m1a, OUTPUT); // enable each pin
    pinMode(m1b, OUTPUT);
    pinMode(m2a, OUTPUT);
    pinMode(m2b, OUTPUT);
    _m1a = m1a; // set private variables for the class
    _m1b = m1b;
    _m2a = m2a;
    _m2b = m2b;
}

void motors::forwards(int x) // method to set forward bias
{
	analogWrite(_m1a, x); // writing correct polarity values for each pin based on time x
	analogWrite(_m1b, 0);
	analogWrite(_m2a, x);
	analogWrite(_m2b, 0);
}

void motors::backwards(int x) // method to set reverse bias
{
	analogWrite(_m1a, 0); // writing correct polarities for each pin based on time x
	analogWrite(_m1b, x);
	analogWrite(_m2a, 0);
	analogWrite(_m2b, x);
}

void motors::left(int x) // method to set left bias
{
	analogWrite(_m1a, 0); // writing correct polarities to each pin based on time x
	analogWrite(_m1b, x);
	analogWrite(_m2a, x);
	analogWrite(_m2b, 0);
}

void motors::right(int x) // method to set right bias
{
	analogWrite(_m1a, x); // writing correct polarities to each pin based on time x
	analogWrite(_m1b, 0);
	analogWrite(_m2a, 0);
	analogWrite(_m2b, x);
}

void motors::stop() // method to stop the motors
{
	analogWrite(_m1a, 0); // writes stop signals to the motor pins
	analogWrite(_m1b, 0);
	analogWrite(_m2a, 0);
	analogWrite(_m2b, 0);
}
