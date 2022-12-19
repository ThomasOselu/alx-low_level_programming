#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: the string to be converted
 *
 * Return: The integer value of the converted string
 */
int _strlen(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			sign = -1;

		else if (*s == '+' || *s == ' ')
			sign = 1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (*s == ';')
			break;
	} while (*s++);

	return (num * sign);
}
