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
	int diff, index;

	if (min > max)
		return (NULL);
	diff = max - min + 1;
	range = malloc(sizeof(int) * diff);
	if (range == NULL)
		return (NULL);
	for (index = 0; index < diff; index++)
		range[index] = min++;
	return (range);
	free(range);
}
