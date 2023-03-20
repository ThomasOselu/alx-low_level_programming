#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: the string to be converted
 *
 * Return: The integer value of the converted string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}
