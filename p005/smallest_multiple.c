#include <stdio.h>
#include <time.h>

int isDividedByAll(int);

int main() {
	float ratio = 1./CLOCKS_PER_SEC;
	clock_t t1 = clock();
	
	int is_found = 0;
	int a = 20;
	while (!is_found) {
		
		if (isDividedByAll(a)) {
			is_found = 1;
		} else {
			a++;
		}
	
	}

	clock_t t2 = clock();
	printf("Smallest positive number is %d. Found in %f seconds.", a, ratio*(long)t1+ratio*(long)t2 );
	
	return 0;

}

int isDividedByAll(int num) {
	int divided_by_all = 1;

	for (int i = 1; i <= 20; i++) {
		if (num % i != 0) {
			divided_by_all = 0;
			break;
		}
	}

	return divided_by_all; 
}


