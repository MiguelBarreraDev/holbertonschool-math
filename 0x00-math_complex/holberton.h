#ifndef COMPLEX_H
#define COMPLEX_H

#include <stdio.h>
#include <math.h>

/**
 * struct Complex - store the real and imaginary
 * part of a complex number
 *
 * @re: variable that will stored the real parte
 * @im: varible that will stores the imaginary part
 */
typedef struct Complex
{
	double re;
	double im;
} complex;

/* functions prototypes */
void display_complex_number(complex c);
complex conjugate(complex c);
double modulus(complex c);
double argument(complex c);
void addition(complex c1, complex c2, complex *c3);
void substraction(complex c1, complex c2, complex *c3);
void multiplication(complex c1, complex c2, complex *c3);
complex multi(complex c1, complex c2, complex c3);
void division(complex c1, complex c2, complex *c3);
void complex_from_mod_arg(double m, double arg, complex *c3);

#endif
