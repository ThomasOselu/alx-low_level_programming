#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers- a function that prints numbers, followed by a new line.
 * @n: the number of parameters
 * @separator: pointer to the string separator
 * @..:other parameter.
 *
 * Return: 1234...the number printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int nums;
	va_list argu;

	va_start(argu, n);
	for (i = 0; i < n; i++)
	{
		nums = va_arg(argu, int);
		printf("%d", nums);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(argu);
}
