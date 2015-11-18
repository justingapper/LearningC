#include <stdio.h>
#include "complex.h"

complex mult2(complex a, complex b){
	complex out_mult2;
	out_mult2.x = (a.x*b.x)-(a.y*b.y);
	out_mult2.y = (a.x*b.y)+(b.x*a.y);
	return(out_mult2);
}

complex square(complex a){
	complex out_square;
	out_square.x = ((a.x*a.x) - (a.y*a.y));
	out_square.y = (2*a.x*a.y);
	return(out_square);
}	

complex add2(complex a, complex b){
	complex out_add2;
	out_add2.x = a.x + b.x;
	out_add2.y = a.y + b.y;
	return(out_add2);
}

complex juliamap(complex z, complex c){
	complex out_juliamap;
	out_juliamap = add2(square(z),c);
	return(out_juliamap);
}

complex complex_print(complex z){
	complex out_complex_print;
	out_complex_print = z;
	return(out_complex_print);
}


