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

	arg = (c.re != 0) ? atan2(c.im, c.re) : 0;
	return (arg);
}
