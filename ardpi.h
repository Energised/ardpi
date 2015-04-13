/*
	ardpi.h 

	Simple C++ library for Arduino motor calls
	
	Created by Dan Woolsey
	Released into the public domain

	IMPLEMENTATION OF THE LIBRARY:
		Constructor takes in 4 integer arguments that are the pins for use
		with the L293D motor controller IC board

	USAGE:
		> #include <ardpi.h> (must have imported the library first into the Arudino Software)
		> motors motors(pin_a, pin_b, pin_c, pin_d);
		> motors.forwards();
		> motors.backwards();
		> motors.left();
		> motors.right();
		> motors.stop();

*/
#ifndef ardpi_h // defines the use of ardpi.h as a library
#define ardpi_h

#include "Arduino.h" // use the base arduino system

class motors // sets up the information for the motors class
{
public:
	motors(int m1a, int m1b, int m2a, int m2b); // defines the methods for the class
	void forwards(int x);
	void backwards(int x);
	void left(int x);
	void right(int x);
	void stop();
private: // lists private variables
	int _m1a;
	int _m1b;
	int _m2a;
	int _m2b;
};

#endif
