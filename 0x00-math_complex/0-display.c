#include "holberton.h"
/**
 * display_complex_number - show complex number
 *
 * @c: variable of type struct complex
 */
void display_complex_number(complex c)
{
	double re = c.re, im = c.im;

	if ((re >= 0 && re <= 0.5) && (im >= 0 && im <= 0.5))
		printf("0\n");
	else if (!(re >= 0  && re <= 0.5) && !(im >= 0 && im <= 0.5))
		printf("%.0f + %.0fi\n", re, im);
	else if (!(re >= 0 && re <= 0.5))
		printf("%.0f\n", re);
	else if (!(im >= 0 && im <= 0.5))
		printf("%.0fi\n", im);
}
