#include "main.h"
/**
 * print_numbers - prints numbers for 0 to 9,
 *           followed by a new line
 */
void print_numbers(void)
{
	for (int a = '0'; a <= '9'; a++)
		_putchar((a % 10) + '0');

	_putchar('\n');
}
