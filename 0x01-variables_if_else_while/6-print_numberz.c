#include <stdio.h>
/**
 * main -prints all digit of base 10,starting from 0
 * followed by a new line
 *
 * Return:123 ...if the value is of base 10 ,zero otherwise
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}
	putchar('\n');
	return (0);
}
