#include "main.h"
/**
 * display_complex_number - show complex number
 *
 * @c: variable of type struct complex
 */
void display_complex_number(complex c)
{
	if (c.re == 0)
		printf("%di", c.im);
	if (c.im == 0)
		printf("%d", c.re);
	if (c.re && c.im)
		printf("%d + %di", c.re, c.im);
	putchar(10);
}
