#include "main.h"
/**
 * display_complex_number - show complex number
 *
 * @c: variable of type struct complex
 */
void display_complex_number(complex c)
{
	if (c.re == 0)
		printf("%.0f\n", c.im);
	if (c.im == 0)
		printf("%.0f\n", c.re);
	if (c.re != 0 && c.im != 0)
		printf("%.0f + %.0fi\n", c.re, c.im);
}
