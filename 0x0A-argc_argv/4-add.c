#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds two positive values and prints the result
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 25354784 the values and 0 otherwise
 */
int main(int argc, char *argv[])
{
	int num1, digit, sum = 0;

	for (num1 = 1; num1 < argc; num1++)
	{
		for (digit = 0; argv[num1][digit]; digit++)
		{
			if (argv[num1][digit] < '0' || argv[num1][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[num1]);
	}
	printf("%d\n", sum);
	return (0);
}
