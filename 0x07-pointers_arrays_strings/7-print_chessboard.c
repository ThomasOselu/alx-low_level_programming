#include "main.h"
/**
 * print_chessboard - Function that  prints the chessboard.
 * @a: An array
 * Return: Void
 */
void print_chessboard(char (*a)[8])
{
	int count1, count2;

	for (count1 = 0; count1 < 8; count1++)
	{
		for (count2 = 0; count2 < 8; count2++)
			_putchar(a[count1][count2]);
		_putchar('\n');
	}
}
