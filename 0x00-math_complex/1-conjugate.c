#include "holberton.h"
/**
 * conjugate - function that returns the conjugate of a given complex number.
 *
 * @c: variable of type struct complex
 *
 * Return: variable of type struct complex
 */
complex conjugate(complex c)
{
	c.im *= -1;

	return (c);
}
