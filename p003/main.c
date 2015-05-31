#include <stdio.h>
#include <math.h>

int main() {
	long a = 600851475143;

	long limit = sqrt(a);
	long arr[limit];

	// Initialize the array
	for (int i=0; i<limit; i++) {
		arr[i] = 0;
	}

	for (int i=2; i < limit; i++ ) {
		if (arr[i] == 0) {
			for (long j = i; j < limit; (j= j+i) ){
				if (i != j) {
					arr[j] = 1;
				}
			}
		}
	
	}

	for (long x = limit; x>2; x--) {
		if (arr[x] == 0 && (a % x == 0)) {
			printf("The largest prime factor of %ld is %ld \n", a, x);
			break;
		}
	}

	return 0;
	
}


