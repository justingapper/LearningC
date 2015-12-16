#include <stdio.h>
#include "complex.h"

// Set a complex number
//void set(complex *c, tyde a, tyde b){
//  c->x=a;
//  c->y=b;
//}

// Multiply two complex numbers

complex mult2(complex *a, complex *b){
	complex out_mult2;
	out_mult2.x = (a->x*b->x)-(a->y*b->y);
	out_mult2.y = (a->x*b->y)+(b->x*a->y);
	return(out_mult2);
}

// Square a complex number
//complex square(complex *a){
//  return mult2(a,a);
//}

complex square(complex *a){
	complex out_square;
	out_square.x = ((a->x*a->x) - (a->y*a->y));
	out_square.y = (2*a->x*a->y);
	return(out_square);
}

// Add two complex numbers
//complex add2(complex *a, complex *b){
//  complex z;
//  z.x=(a->x)+(b->x);
//  z.y=(a->y)+(b->y);
//  return z;
//}

complex add2(complex *a, complex *b){
	complex out_add2;
	out_add2.x = a->x + b->x;
	out_add2.y = a->y + b->y;
	return(out_add2);
}

// Apply juliamap to two complex numbers
//complex juliamap(complex *a, complex *b){
//  complex c = square(a);
//  return add2(&c,b);
//}

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
