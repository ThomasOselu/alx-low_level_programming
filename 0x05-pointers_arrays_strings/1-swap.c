#include "main.h"
/**
 * swap_int -swaps the values of two integers
 * @a: the first to be swapped
 * @b: the second to be swapped
 */
void swap_int(int *a, int *b)
{
	int swp = *a;
	*a = *b;
	*b = swp;
}
