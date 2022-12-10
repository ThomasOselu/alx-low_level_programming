#include <stdio.h>
/**
 * main -prints out alphabet in lowercase
 * follwed by a new line except q and e
 *
 * Return: abcd... before q and e, escape(q and e) and continous after
 * Returns:0(success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
