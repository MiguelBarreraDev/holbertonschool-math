#ifndef HERON_H
#define HERON_H

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/**
 * struct Heron - struct
 * @elt: double number
 * @next: pointer
 */

typedef struct Heron
{
	double elt;
	struct Heron *next;
} t_cell;

t_cell *heron(double p, double x0);

#endif
