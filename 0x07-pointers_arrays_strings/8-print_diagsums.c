#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: input value
 * @size: input value
 * Return: Void
 */
void print_diagsums(int *a, int size)
{
	int total = 0;
	int sum = 0;
	int count = 0;

	for (; count < size; count++)
	{
		total = total + a[count * size + count];
	}
	for (count = size - 1; count >= 0; count--)
		sum += a[count * size + (size - count - 1)];
	printf("%d,%d\n", total, sum);
}
