#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked -allocates memory using malloc
 * @b: the integer to allocate
 *
 * Return: a pointer if successful and 98 otherwise
 */
void *malloc_checked(unsigned int b)
{
	int *mal = malloc(b);

	if (mal == NULL)
		exit(98);
	return (mal);
	free(mal);
}
