#include "main.h"
#include <stdlib.h>
/**
 * array_range -function that creates an array of integers
 * @min: minimum integer
 * @max: maximum integer
 *
 * Return: min > max, return NULL otherwise  NULL
 */
int *array_range(int min, int max)
{
	int *range;
	int diff, i;

	if (min > max)
		return (NULL);
	diff = min - max;
	range = malloc(sizeof(int) * (diff + 1));
	if (range == NULL)
		return (NULL);
	for (i = 0; i < diff; i++)
		range[i] = min++;
	return (range);
}
