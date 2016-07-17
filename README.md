# c-polynomial
Just another Polynomial class.

INSTRUCTIONS

Polynomial zeroPolynomial(int a)

  Makes a new polynomial object of order a, with all coefficients zero.

Polynomial newPolynomial(int a, int \*values)

  Makes a new polynomial of order a with coefficiants equal to the entries in the array values.
  For instance if you wanted to represent the polynomial 1 + 2x + 5x^3 you would use the array values = {1, 2, 0, 5}.
  Make sure that values is as large as a+1 or there will be a segmentation fault.

Polynomial add(Polynomial \*a, Polynomial \*b)

  Prety self explanitory, just adds two polynomials, a and b, and returns the answer.

Polynomial multiply(Polynomial \*a, Polynomial \*b)

  Same deal as add but multiplies them.

Polynomial square(Polynomial \*a)

  Multiplies a by itself.

Polynomial power(Polynomial \*a, int p)

  Multiplies a by itself p times, unless p = 0, and then returns the polynomial 1.


FUTURE FUNCTIONALITY

I intend on building a class for modelling finite fields, and once I do that for the primes, I can use it in conjunction with this class to model any GF(p^n) where p is prime and n is any non zero positive whole number. Once I do that I will be able to add functionality for finding quotients and remainders of polynomial division but until then I will stick with this.
