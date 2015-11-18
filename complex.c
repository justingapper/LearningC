#include <stdio.h>
#include "complex.h"

typedef struct complex{
	long double x;
	long double y;
}complex;

complex mult2(complex a, complex b);
complex square(complex a);
complex add2(complex a, complex b);
complex juliamap(complex z, complex c);
complex complex_print(complex z);

int main(){
	test();
	return 0;
}


int test(){
	complex a, b, z, c, out_mult2, out_square, out_add2, out_juliamap, out_complex_print;
	printf("\nEnter real and imaginary parts of a: ");
	scanf("%Lf%Lf", &a.x,&a.y);
	printf("\nEnter real and imaginary parts of b: ");
	scanf("%Lf%Lf", &b.x,&b.y);
	out_mult2 = mult2(a,b);
	out_square = square(a);
	out_add2 = add2(a,b);
	printf("\nmult2 (a+b): %Lf + %Lfi",out_mult2.x, out_mult2.y);
	printf("\nsquare (a): %Lf + %Lfi",out_square.x, out_square.y);
	printf("\nadd2 (a+b): %Lf + %Lfi",out_add2.x, out_add2.y);

	printf("\nEnter real and imaginary parts of z: ");
	scanf("%Lf%Lf", &z.x,&z.y);
	printf("\nEnter real and imaginary parts of c: ");
	scanf("%Lf%Lf", &c.x,&c.y);
	out_juliamap = juliamap(z,c);
	out_complex_print = complex_print(z);
	printf("\njuliamap (z^2 + c): %Lf + %Lfi",out_juliamap.x, out_juliamap.y);
	printf("\ncomplex_print: z = %Lf + %Lfi",out_complex_print.x, out_complex_print.y);
	return 0;
}

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


