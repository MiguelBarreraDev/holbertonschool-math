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
	complex c2_cjd, D, d, save;

	c2_cjd = conjugate(c2);

	D = multi(c1, c2_cjd, save);
	d = multi(c2, c2_cjd, save);

	c3->re = (D.re / d.re);
	c3->im = (D.im / d.re);
}
