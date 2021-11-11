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
	return (atan(c.im / c.re));
}
