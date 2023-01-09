#include "main.h"
/**
 * _memcpy - copy mem address
 * @dest: mem origin
 * @src: mem destination
 * @n: Bytes
 * Return: The coppied mem cell
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int numb;
	int numb2 = n;

	for (numb = 0; numb < numb2; numb++)
	{
		dest[numb] = src[numb];
		n--;
	}
	return (dest);
}
