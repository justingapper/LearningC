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


/*
complex juliamap_ch(complex z, complex c){
	complex out_juliamap_ch;
	out_juliamap_ch.x = (((z.x*z.x)-(z.y*z.y))+c.x);
	out_juliamap_ch.y = ((2*z.x*z.y)+c.y);
	return(out_juliamap_ch);
}
complex juliamap_ch(complex z, complex c){
	complex out_juliamap_ch;
	out_juliamap_ch.x = (((z.x*z.x)-(z.y*z.y))+c.x);
	out_juliamap_ch.y = ((2*z.x*z.y)+c.y);
	return(out_juliamap_ch);
}


	juliamap_r = (((zr*zr)-(zi*zi))+c);
	juliamap_i = (2*zr*zi);

complex mult2(struct complex a, struct complex b);
	struct complex out;
	out.x
struct complex square(struct complex a);
struct complex add2(struct complex a, sturct complex b);
struct complex juliamap(struct complex z, struct complex c);

struct complex mult2(struct complex a, struct complex b){
	struct
	int ax;
	int ay;
	int bx;
	int by;
	int mult2_r;
	int mult2_i;
	int square_ar;
	int square_ai;
	int square_br;
	int square_bi;
	int add2_r;
	int add2_i;
	int zr;
	int zi;
	int c;
	int juliamap_r;
	int juliamap_i;

	printf("\nEnter x1: ");
	scanf("%i", &ax);
	printf("\nEnter y1: ");
	scanf("%i", &ay);
	printf("\nEnter x2: ");
	scanf("%i", &bx);
	printf("\nEnter y2: ");
	scanf("%i", &by);

	mult2_r = ((ax*bx) - (ay*by));
	mult2_i = ((ax*by) + (bx*ay));
	square_ar = ((ax*ax)-(ay*ay));
	square_ai = (2*ax*ay);
	square_br = ((bx*bx)-(by*by));
	square_bi = (2*bx*by);
	add2_r = (ax+bx);
	add2_i = (ay + by);

	printf("\nmult2 (a*b): %i + %i *i", mult2_r, mult2_i);
	printf("\nsquare (a^2): %i + %i *i",square_ar, square_ai);
	printf("\nsquare (b^2): %i + %i *i",square_br, square_bi);
	printf("\nadd2 (a+b): %i + %i *i",add2_r, add2_i);

	printf("\nEnter real portion of z: ");
	scanf("%i", &zr);
	printf("\nEnter complex portion of z: ");
	scanf("%i", &zi);
	printf("\nEnter c: ");
	scanf("%i", &c);

	juliamap_r = (((zr*zr)-(zi*zi))+c);
	juliamap_i = (2*zr*zi);

	printf("\juliamap (z^2 +c): %i + %i *i",juliamap_r, juliamap_i);
	printf("\nz=x+yi where %i and %i are its real and imaginary parts", zr, zi);
}
*/
