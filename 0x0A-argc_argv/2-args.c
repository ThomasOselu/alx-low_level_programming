#include <stdio.h>
/**
 * main- prints the all arguments it receives
 * @agrc:the number of argument supplied to the program
 * @agrv: the array of pointers to the program;
 *
 * Return:agrv or 0 otherwise
 */
int main(int agrc, char *agrv[])
{
	int agc;

	for (agc = 0; agc < agrc; agc++)
		printf("%s\n", agrv[agc]);
	return (0);
}
