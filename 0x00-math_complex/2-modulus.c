#include "holberton.h"
#include <math.h>
/**
 * modulus - function that get the module of a complex number
 *
 * @c: variable of type struct complex
 *
 * Return: double number
 */
double modulus(complex c)
{
	return (sqrt(pow(c.re, 2) + pow(c.im, 2)));
}
