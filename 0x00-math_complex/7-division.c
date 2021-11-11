#include "holberton.h"
/**
 * division - function that performs the division
 * operation to complex numbers
 *
 * @c1: variable of type struct complex
 * @c2: variable of type struct complex
 * @c3: variable of type pointer to struct complex
 */
void division(complex c1, complex c2, complex *c3)
{
	complex f1, f2;

	f1.re = c1.re * c2.re - c1.im * c2.im * (-1);
	f1.im = c1.im * c2.re + c2.im * (-1) * c1.re;

	f2.re = c2.re * c2.re - c2.im * c2.im * (-1);
	f2.im = c2.im * c2.re + c2.im * (-1) * c2.re;

	c3->re = f1.re / f2.re;
	c3->im = f1.im / f2.re;
}
