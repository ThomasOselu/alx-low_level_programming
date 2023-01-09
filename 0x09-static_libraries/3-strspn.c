#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: input value
 * @accept: Input value
 * Return: if succesfull zero
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int value = 0;
	int count;

	while (*s)
	{
		for (count = 0; accept[count]; count++)
		{
			if (*s == accept[count])
			{
				value++;
				break;
			}
			else if (accept[count + 1] == '\0')
				return (value);
		}
		s++;
	}
	return (value);
}
