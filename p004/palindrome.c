#include <stdio.h>
#include <math.h>
#include <time.h>

int isPalindromic(int);

int main() {
	int largest = 0;
	float ratio = 1./CLOCKS_PER_SEC;
	clock_t t1 = clock();
	for (int i = 999; i>100; i--) {
		for (int j = 100; j<999; j++) {
			int candidate = i*j;
			if (isPalindromic(candidate) == 0 ) {
				//printf("%ld is a palindromic number\n", candidate);
				if (candidate > largest) {
					largest = candidate;
				}	
			}
		}
	}
	
	clock_t t2 = clock();
	printf("The largest palindromic is %d found in %f seconds.\n", largest, ratio*(long)t1+ratio*(long)t2 );
	return 0;
}

int isPalindromic(int n) {

	int result = 0;
	// max length can be 6
	int length = (n == 0 ? 1 : (int)(log10(n) + 1));
	// One more space for '\0' to put end of the char array
	length++;
	//printf("Length  is %d\n", length);
	
	char str[length];
	sprintf(str, "%d", n);

	//printf("string is %s\n", str);

	// Reverse the string.
	char reverse[length];

	for (int j=0; j<length; j++) {
		//printf("The new val for j %d is %c\n", j, str[(length-2) - j]);
		reverse[j] = str[(length-2) - j];
	}
	//printf("\nReverse string is  %s \n", reverse);
	
	// compare two strings
	for (int i=0; i<length-1; i++) {
		//printf("str[%d] =>  %c  == reverse[%d] => %c \n", i, str[i], i, reverse[i]);
		if (str[i] != reverse[i]) {

			//printf("!!!! str[%d] =>  %c  == reverse[%d] => %c \n", i, str[i], i, reverse[i]);
			result = 1;
			break;
		}
	}

	/*
	printf("\n %d Result is \n", result);
	if (result == 0) {
		printf("\n %d is  palindromic! \n", n);
	}
	*/

	return result;

}


