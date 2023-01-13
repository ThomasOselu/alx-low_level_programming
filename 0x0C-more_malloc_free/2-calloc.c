#include "main.h"
#include <stdlib.h>
/**
 * _calloc -allocates memory to array using malloc
 * @nmemb: an array of pointers
 * @size: the number of pararmeters to supply
 *
 * Return: NULL  if 0 otherwise NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int cal = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	for (; cal < nmemb * size; cal++)
		*(array + cal) = 0;
	return (array);
}
