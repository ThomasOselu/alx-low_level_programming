#include <stdio.h>
/**
 * main -prints the alphabets in lowercases
 *
 * Return: 0 if successful, non-zero othherwise
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	putchar (ch);
	}
	putchar ('\n');
	return (0);
}
