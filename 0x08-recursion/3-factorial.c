#include "main.h"
/**
 * factorial -  returns the factorial of a given number
 * @n: The number
 * Return: The factorial value of n of n>1 else error
 */
int factorial(int n)
{
	int Factorial = n;

	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);
	Factorial *= factorial(n - 1);
	return (Factorial);
}
