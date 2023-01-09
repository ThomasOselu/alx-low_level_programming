#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @s: Starting address of memory
 * @b: Desired value
 * @n: Number of bytes to be charged
 * Return: Changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int numb;

	for (numb = 0; n > 0; numb++)
	{
		s[numb] = b;
		n--;
	}
	return (s);
}
