#include "main.h"
/**
 * display_complex_number - show complex number
 *
 * @c: variable of type struct complex
 */
void display_complex_number(complex c)
{
	if (c.re == 0)
		printf("%fi", c.im);
	if (c.im == 0)
		printf("%f", c.re);
	if (c.re && c.im)
		printf("%f + %fi", c.re, c.im);
	putchar(10);
}
