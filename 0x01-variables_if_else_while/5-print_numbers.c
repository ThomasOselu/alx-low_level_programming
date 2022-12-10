#include <stdio.h>
/**
 * main -printsall value of base 10 ,starting from 0
 * followed by a new line
 *
 * Return:123 ... if its of base 10 and aero elsewhere
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);
	printf("\n");
	return (0);
}
