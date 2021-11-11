#include "holberton.h"
/**
 * display_complex_number - show complex number
 *
 * @c: variable of type struct complex
 */
void display_complex_number(complex c)
{
	double dre, dim;

	if (c.im == 0)
		printf("%.0f\n", c.re);
	else
	{
		dre = fmod(c.re, 1);
		dim = fmod(c.im, 1);
		if (dre == 0)
			printf("%.0f", c.re);
		else
			printf("%.1f", c.re);
		if (c.im > 0)
		{
			printf(" + ");
			if (c.im == 1)
				printf("i\n");
			else if (dim == 0)
				printf("%.0fi\n", c.im);
			else
				printf("%.1fi\n", c.im);
		}
		else if (c.im < 0)
		{
			printf(" - ");
			if (c.im == -1)
			{
				printf("i\n");
				return;
			}
			printf("%.0fi\n", -c.im);
			if (dim == 0)
				printf("%.0fi\n", c.im);
			else
				printf("%.1fi\n", c.im);
		}
	}
}
