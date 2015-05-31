#include <stdio.h>


int main() {
	int limit = 100;
	//printf("Squre of %d is %d\n", n, (n*n));
	
	long sum1 = 0;
	long sum2 = 0;
	
	for (int i=1; i <= limit; i++) {
		sum1 += i*i;
		sum2 += i;
	}
	
	printf("The sum of the squares of the first ten natural numbers is %ld \n", sum1);
	sum2 = sum2*sum2;
	printf("The square of the sum of the first ten natural numbers is %ld\n", sum2 );
	printf("The difference between the sum of the squares of the first ten natural numbers and the square of the sum is %ld\n", sum2-sum1);

	return 0;
}
