#include "holberton.h"
/**
 * display_complex_number - show complex number
 *
 * @c: variable of type struct complex
 */
void display_complex_number(complex c)
{
	float re = c.re, im = c.im;

	printf("%.0f + %.0fi\n", re, im);
}
