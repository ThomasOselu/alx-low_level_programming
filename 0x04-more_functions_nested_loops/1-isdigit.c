#include "main.h"
/**
 * _isdigit- checks for a digit
 * @c: the digit to be checked
 *
 * Return: 1 if a digit and zero otherwise
 */
int _isdigit(int c);
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return(0);
}
