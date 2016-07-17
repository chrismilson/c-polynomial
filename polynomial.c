#include "polynomial.h"

Polynomial *zeroPolynomial(int ord) {
  Polynomial *dest;
  dest = malloc(sizeof(int) * ord + 2);
  dest->order = ord;
  dest->values = malloc(sizeof(int) * ord + 1);
  memset(dest->values, 0, sizeof(int) * ord + 1);
  return dest;
}

Polynomial *newPolynomial(int ord, int *val) {
  Polynomial *dest;
  dest = zeroPolynomial(ord);
  int i;
  for (i = 0; i <= ord; i++) {
    dest->values[i] = val[i];
  }
  return dest;
}

Polynomial *add(Polynomial *a, Polynomial *b) {
  Polynomial *sum;
  sum = zeroPolynomial((a->order > b->order) ? a->order : b->order);
  int i;
  for (i = 0; i <= a->order; i++) {
    sum->values[i] += a->values[i];
  }
  for (i = 0; i <= b->order; i++) {
    sum->values[i] += b->values[i];
  }

  return sum;
}

Polynomial *multiply(Polynomial *a, Polynomial *b) {
  Polynomial *product;
  product = zeroPolynomial(a->order + b->order);
  int i, j;
  for (i = 0; i <= a->order; i++) {
    for (j = 0; j <= b->order; j++) {
      product->values[i + j] += a->values[i] * b->values[j];
    }
  }
  return product;
}

Polynomial *square(Polynomial *a) {
  return multiply(a, a);
}

Polynomial *power(Polynomial *a, int pwr) {
  Polynomial *answer;
  if (!pwr) {
    int c = 0;
    return newPolynomial(0, &c);
  }
  answer = a;
  int i;
  for (i = 0; i < pwr; i++) {
    answer = multiply(answer, a);
  }
  return answer;
}

void printPoly(Polynomial *poly) {
  int i;
  for (i = 0; i <= poly->order; i++) {
    if (poly->values[i] == 0) {
      continue;
    }
    char str1[50], str2[50];
    sprintf(str1, "x^%d", i);
    sprintf(str2, "%d", poly->values[i]);
    printf("%s%s", (poly->values[i] != 1 || i == 0) ? str2 : "", (i == 0 ? "" : (i == 1) ? "x" : str1));
    if (i != poly->order && poly->values[i + 1]) {
      printf(" + ");
    }
  }
  printf("\n");
}
