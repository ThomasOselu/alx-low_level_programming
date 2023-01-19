#include "function_pointers.h"
#include<stdio.h>
/**
 * array_iterator-function that executes a function given as a parameter
 * on each element of an array
 * @array: pointer to array
 * @size: size of the array
 * @action: pointer to the function
 *
 * Return: elements of the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
