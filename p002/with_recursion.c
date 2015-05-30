#include <stdio.h>

void gen_fib(int, int);

int limit = 4000000;
unsigned int sum = 2;

int main() {
	gen_fib(1, 2);
	printf("The sum is %u \n", sum);
}

void gen_fib(int a, int b) {
	if (b >= limit) return; 
	int next = a + b;
	if (next % 2 == 0) sum += next;
	gen_fib(b, next);
}
