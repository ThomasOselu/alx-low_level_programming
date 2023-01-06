#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: input value
 * @accept: Input value
 * Return: if succesfull zero
 */
char *_strpbrk(char *s, char *accept)
{
	int count;

	while (*s)
	{
		for (count = 0; accept[count]; count++)
		{
			if (*s == accept[count])
				return (s);
		}
		s++;
	}
	return ('\0');
}
