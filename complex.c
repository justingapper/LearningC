#include <stdio.h>

typedef struct complex{
	float x;
	float y;
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
	scanf("%f%f", &a.x,&a.y);
	printf("\nEnter real and imaginary parts of b: ");
	scanf("%f%f", &b.x,&b.y);
	out_mult2 = mult2(a,b);
	out_square = square(a);
	out_add2 = add2(a,b);
	printf("\nmult2 (a+b): %f + %fi",out_mult2.x, out_mult2.y);
	printf("\nsquare (a): %f + %fi",out_square.x, out_square.y);
	printf("\nadd2 (a+b): %f + %fi",out_add2.x, out_add2.y);

	printf("\nEnter real and imaginary parts of z: ");
	scanf("%f%f", &z.x,&z.y);
	printf("\nEnter real and imaginary parts of c: ");
	scanf("%f%f", &c.x,&c.y);
	out_juliamap = juliamap(z,c);
	out_complex_print = complex_print(z);
	printf("\njuliamap (z^2 + c): %f + %fi",out_juliamap.x, out_juliamap.y);
	printf("\ncomplex_print: z = %f + %fi",out_complex_print.x, out_complex_print.y);
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


