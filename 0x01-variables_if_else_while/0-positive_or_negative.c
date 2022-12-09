#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main-entry point
 *
 * Returns: is positive if greater than 0, the number is 0 if zero, the number is less than 0 is negative
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* checking the boolean condition */
	if (n <0) {
		/* if the condition is true print the following */
		printf("n is negative: %d\n", n);
	}else if (n==0) {
		/* if the condition is true print the following */
		printf("n is zero: %d\n", n);
	}else{
		/*if none of the conditions is true print the following */
		printf("n is positive: %d\n", n);
	}
		return (0);
}
