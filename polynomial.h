#ifndef POLYNOMIAL_H

#define POLYNOMIAL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

typedef struct Polynomial {
  int order;
  int *values;
} Polynomial;

Polynomial *zeroPolynomial(int);

Polynomial *newPolynomial(int, int*);

Polynomial *add(Polynomial*, Polynomial*);

Polynomial *multiply(Polynomial*, Polynomial*);

Polynomial *square(Polynomial*);

Polynomial *power(Polynomial*, int);

void printPoly(Polynomial*);

#endif
