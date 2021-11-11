#include "holberton.h"
/**
 * display_complex_number - show complex number
 *
 * @c: variable of type struct complex
 */
void display_complex_number(complex c)
{
	char i = '+';
	float dre, dim;

	dre = fmod(c.re, 1);
	dim = fmod(c.im, 1);
	if (c.im < 0)
	{
		c.im = -(c.im);
		i = '-';
	}
	if (c.re != 0 && c.im != 0)
	{
		if (dre == 0)
			printf("%.0f ", c.re);
		else
			printf("%.1f ", c.re);
		if (c.im == 1)
			printf("%c i\n", i);
		else
		{
			if (dim == 0)
				printf("%c %.0fi\n", i, c.im);
			else
				printf("%c %.1fi\n", i, c.im);
		}
	}
	else if (c.im == 0)
	{
		if (dre == 0)
			printf("%.0f\n", c.re);
		else
			printf("%.1f\n", c.re);
	}
	else if (c.re == 0)
	{
		if (c.im == 1)
			printf("i\n");
		else if (c.im > 1)
		{
			if (dim == 0)
				printf("%.0f\n", c.im);
			else
				printf("%.1f\n", c.im);
		}
		else if (c.im < 0)
		{
			if (dim == 0)
				printf("%c %.0f\n", i, c.im);
			else
				printf("%c %.1f\n", i, c.im);
		}
	}
}
