#include <stdio.h>
#include <math.h>


int isPrime(int);

int main() {
	int limit = 10001;
	
	int count = 0;
	int candidate = 0;


	while ( count <= limit) {
		if ( isPrime(candidate) ) {
			if (count == limit) break;
			count++;
		}
		candidate++;
	}
	
	printf("%dst prime number is %d\n", count, candidate);
	return 0;
}

int isPrime(int a) {
	if (a == 1) return 0;
	if (a <= 3) return 1;
	
	int is_prime = 1;
	int limit = sqrt(a);

	for (int i=2; i <= limit; i++) {
		if (a % i == 0) {
			is_prime = 0;
		}
	}

	return is_prime;
	
}
