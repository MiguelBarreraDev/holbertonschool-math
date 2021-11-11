#include "holberton.h"
/**
 * display_complex_number - show complex number
 *
 * @c: variable of type struct complex
 */
void display_complex_number(complex c)
{
	float re = c.re, im = c.im;

	if (im == 0)
		printf("%.0f\n", re);
	else
		printf("%.0f + %.0fi\n", re, im);
}
