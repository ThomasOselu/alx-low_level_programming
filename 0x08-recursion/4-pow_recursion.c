#include "main.h"
/**
 * int _pow_recursion - Return x^y
 * @x: The number value
 * @y: The power value
 * Return: X
 */
int _pow_recursion(int x, int y)
{
	int power = x;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	power = _pow_recursion(x, y - 1);
	return (power);
}
