#include "main.h"
/**
 * display_complex_number - show complex number
 *
 * @c: variable of type struct complex
 */
void display_complex_number(complex c)
{
	if (c.re == 0)
		printf("%di\n", c.im);
	if (c.im == 0)
		printf("%d\n", c.re);
	if (c.re != 0 && c.im != 0)
		printf("%d + %di\n", c.re, c.im);
}
