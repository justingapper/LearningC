#include <stdio.h>

main() {
	int a = 0;
	int b = 1;
	int x = 0;
	while(b < 101) {
		printf("%d\n", a);
		x = b;
		b = a+b;
		a = x;
	}
	return 0;
}
