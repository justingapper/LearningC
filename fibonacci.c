#include <stdio.h>
/*fibonacci sequence*/
int main(void) {
	unsigned long long a = 1L; /*first value*/
	unsigned long long b = 1L; /*second value*/
	unsigned long long x = 1L; /*result value (iteration)*/
	int c = 0; /*counter*/
	while(c < 101) {
		printf("%llu\n", a);
		x = b;
		b = a + b;
		a = x;
		c++;
	}
	return 0;
}

/*negative numbers show up because it exceeds the maximum number that can be held using int ((2^31)-1 = 2147483647).  This can be corrected by declaring the variable type unsigned long long, however, this still has a wrap problem at the 95th iteration. */
