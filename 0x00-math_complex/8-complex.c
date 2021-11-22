#include "holberton.h"
/**
* complex_from_mod_arg - Update the real and the imaginary parts
* of a complex number given its modulus and arguments.
* @m: modulus
* @arg: argument
* @c3: complex number
*/
void complex_from_mod_arg(double m, double arg, complex *c3)
{
	double x, y;

	x = cos(arg) * m;
	y = sin(arg) * m;

	c3->re = x;
	c3->im = y;
}
