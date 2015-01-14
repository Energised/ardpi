/*
	ardpi.c++ - Source File for info on motor class 
	Created by Dan Woolsey
	Released into the public domain
*/

#include "Arduino.h"
#include "ardpi.h"

motors::motors(int m1a, int m1b, int m2a, int m2b)
{
    pinMode(m1a, OUTPUT);
    pinMode(m1b, OUTPUT);
    pinMode(m2a, OUTPUT);
    pinMode(m2b, OUTPUT);
    _m1a = m1a;
    _m1b = m1b;
    _m2a = m2a;
    _m2b = m2b;
}

void motors::forwards(int x)
{
	analogWrite(_m1a, x);
	analogWrite(_m1b, 0);
	analogWrite(_m2a, x);
	analogWrite(_m2b, 0);
}

void motors::backwards(int x)
{
	analogWrite(_m1a, 0);
	analogWrite(_m1b, x);
	analogWrite(_m2a, 0);
	analogWrite(_m2b, x);
}

void motors::left(int x)
{
	analogWrite(_m1a, 0);
	analogWrite(_m1b, x);
	analogWrite(_m2a, x);
	analogWrite(_m2b, 0);
}

void motors::right(int x)
{
	analogWrite(_m1a, x);
	analogWrite(_m1b, 0);
	analogWrite(_m2a, 0);
	analogWrite(_m2b, x);
}

void motors::stop()
{
	analogWrite(_m1a, 0);
	analogWrite(_m1b, 0);
	analogWrite(_m2a, 0);
	analogWrite(_m2b, 0);
}