#include <stdio.h>
/*fibonacci sequence*/
int main(void) {
	long a = 1L; /*first value*/
	long b = 1L; /*second value*/
	long x = 1L; /*result value (iteration)*/
	int c = 0; /*counter*/
	while(c < 101) {
		printf("%d\n", a);
		x = b;
		b = a + b;
		a = x;
		c++;
	}
	return 0;
}

/*negative numbers show up because it exceeds the maximum number that can be held using int ((2^31)-1 = 2147483647).  This can be corrected by declaring the variable type long. */
