#include "holberton.h"
/**
 * display_complex_number - show complex number
 *
 * @c: variable of type struct complex
 */
void display_complex_number(complex c)
{
	char i = '+';

	if (c.im < 0)
	{
		c.im = -(c.im);
		i = '-';
	}
	if (c.re != 0 && c.im != 0)
	{
		if (c.im == 1)
			printf("%.0f %c i\n", c.re, i);
		else
			printf("%.1f %c %.1fi\n", c.re, i, c.im);
	}
	else if (c.im == 0)
		printf("%.0f\n", c.re);
	else if (c.re == 0)
	{
		if (c.im == 1)
			printf("i\n");
		else if (c.im > 1)
			printf("%.0fi\n", c.im);
		else if (c.im < 0)
			printf("%c %.0fi\n", i, c.im);
	}
}
