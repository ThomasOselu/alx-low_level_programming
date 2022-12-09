#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main-Prints a random number and states whether
 *      it is positive, negative, or zero.
 *
 *
 * Returns: 0 if the number is 0, the value placed otherwise
 */
int main(void)   /* prints the value defination */
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is positive\n", n);
	}
	return (0);
}
