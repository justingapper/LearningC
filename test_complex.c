#include <stdio.h>
#include "complex.h"

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

