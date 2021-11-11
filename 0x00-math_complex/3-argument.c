#include "holberton.h"
/**
 * argument - function that get the argument of a complex number
 *
 * @c: variable of type structu complex
 *
 * Return: double number
 */
double argument(complex c)
{
	double arg;

	if (c.re != 0)
	{
		arg = atan2(c.im, c.re);
		return (arg);
	}

	return (0);
}
