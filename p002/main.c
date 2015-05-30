#include <stdio.h>
#include <limits.h>

int main() {

	int limit = 4000000;
	
	// The first fibonacci numbers are 1, 2
	int fib_0 = 1, fib_1 = 2, current;
	
	unsigned int sum = 2;

	do {
		current = fib_0 + fib_1;
		if (current % 2 == 0) sum += current;
		fib_0 = fib_1;
		fib_1 = current;
	} while (current < limit );

	printf("The sum is %u \n", sum);
	
	return 0;

}
