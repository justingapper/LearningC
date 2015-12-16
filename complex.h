typedef long double tyde;
typedef struct complex {
  long double x;
  long double y;
} complex;

complex mult2(complex *a, complex *b);
complex square(complex *a);
complex add2(complex *a,complex *b);
complex juliamap(complex *a, complex *b);
complex complex_print(complex *a);