#include <stdio.h>
#include "complex.h"

// Multiply 2 complex numbers
complex mult2(complex *a, complex *b){
	complex out_mult2;
	out_mult2.x = (a->x*b->x)-(a->y*b->y);
	out_mult2.y = (a->x*b->y)+(b->x*a->y);
	return(out_mult2);
}

// Square a complex number
complex square(complex *a){
	complex out_square;
	out_square.x = ((a->x*a->x) - (a->y*a->y));
	out_square.y = (2*a->x*a->y);
	return(out_square);
}

// add 2 complex numbers
complex add2(complex *a, complex *b){
	complex out_add2;
	out_add2.x = a->x + b->x;
	out_add2.y = a->y + b->y;
	return(out_add2);
}

// Apply juliamap to complex numbers
complex juliamap(complex *a, complex *b){
	complex out_juliamap;
	out_juliamap = square(a);
	return add2(&out_juliamap,b);
}

// Print a complex number
complex complex_print(complex *a){
  if ((a->y)<0){
    printf("z=%Lf%Lfi\n",a->x,a->y);
  }
  else{
    printf("z=%Lf+%Lfi\n",a->x,a->y);
  }
}