#include "main.h"
/**
 * _strlen_recursion - Gives the lenth of a string
 * @s: Points to string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}
