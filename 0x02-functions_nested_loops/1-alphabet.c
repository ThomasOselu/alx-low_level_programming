#include "main.h"

/**
 * main-prints the alphabet, in lowercase, followed by a new line
 *
 * Return: Always 0(success)
 */
void print_alphabet(void);
{
	for (char c = 'a'; c <= 'z'; c++)
	{
		_purchar(c);
	}

	_putchar('\n');
	return (0);
}
