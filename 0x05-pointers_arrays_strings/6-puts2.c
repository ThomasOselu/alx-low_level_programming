#include "main.h"
/**
 * puts2 - Prints one char out of two of a string.
 * @str: The string containing characters.
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
