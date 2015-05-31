#include <stdio.h>
#include <math.h>

int main() {
	int limit = 2000000;
	int arr[2000000];

	// Initialize the array
	for (int i=0; i<limit; i++) {
		arr[i] = 0;
	}

	for (int i=2; i < limit; i++ ) {
		if (arr[i] == 0) {
			for (int j = i; j < limit; (j= j+i) ){
				if (i != j) {
					arr[j] = 1;
				}
			}
		}
	
	}

	long sum = 0;
	for (int x = 2; x < limit; x++) {
		if (arr[x] == 0 ) {
			sum += x;
		}
	}
	printf("Sum is %ld \n", sum);

	return 0;
	
}


