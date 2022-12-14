#include "main.h"
/**
 * _ isolower -checks for lower alphabets
 * @c : The character to be checked
 *
 * Return: Always 0
 */
int _islower(int c);
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
