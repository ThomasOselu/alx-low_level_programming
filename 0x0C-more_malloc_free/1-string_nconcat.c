#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - a function that concatinates two strings
 * @s1: the destination string
 * @s2: the source variable
 * @n: the number of bytes to be used
 *
 * Return:If the function fails - NULL.
 * Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int dex = n, num;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	for (num = 0; s1[num]; num++)
		dex++;
	concat =  malloc(sizeof(char) * (dex + 1));
	if (concat == NULL)
		return (NULL);
	dex = 0;
	for (num = 0; s1[num]; num++)
		concat[dex++] = s1[num];
	for (num = 0; s2[num]; num++)
		concat[dex++] = s2[num];
	concat[dex] = '\0';

	return (concat);
}
