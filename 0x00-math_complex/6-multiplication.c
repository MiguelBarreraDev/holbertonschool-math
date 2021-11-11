#include "holberton.h"
/**
 * multiplication - function that performs the multiplication
 * operation to complex numbers
 *
 * @c1: variable of type struct complex
 * @c2: variable of type struct complex
 * @c3: variable of type pointer to struct complex
 */
void multiplication(complex c1, complex c2, complex *c3)
{
	double ac, bc, ad, bd;

	ac = c1.re * c2.re;
	bc = c1.im * c2.re;
	ad = c1.re * c2.im;
	bd = c1.im * c2.im;

	c3->re = (ac - bd);
	c3->im = (ad + bc);
}
/**
 * multi - function that performs the multiplication
 * operation to complex numbers
 *
 * @c1: variable of type struct complex
 * @c2: variable of type struct complex
 * @c3: variable of type pointer to struct complex
 *
 * Return: variable of type struct
 */
complex multi(complex c1, complex c2, complex c3)
{
	double ac, bc, ad, bd;

	ac = c1.re * c2.re;
	bc = c1.im * c2.re;
	ad = c1.re * c2.im;
	bd = c1.im * c2.im;

	c3.re = (ac - bd);
	c3.im = (ad + bc);

	return (c3);
}
