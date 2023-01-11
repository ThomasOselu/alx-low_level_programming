#include "main.h"
#include <stdlib.h>
/**
 * create_array- creates an array of chars
 * and initializes it with a specific char
 * @size: The size of the array to be initialized.
 * @c:  The specific char to intialize the array with.
 *
 * Return:If size == 0 or the function fails - NULL.
 *         Otherwise - a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *arrays;
	unsigned int num;

	if (size == 0)
		return (NULL);
	arrays = malloc(sizeof(char) * size);
	if (arrays == NULL)
		return (NULL);
	for (num = 0; num < size; num++)
		arrays[num] = c;
	return (arrays);
}
