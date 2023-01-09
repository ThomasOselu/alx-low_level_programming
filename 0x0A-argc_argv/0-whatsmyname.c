#include <stdio.h>
/**
 * main - Prints the program name, followed by a new line
 * @agrc: The number of arguments supplied to the program.
 * @agrv: An array of pointers to the arguments.
 *
 * Return: Always o.
 */
int main(int __attribute__((__unused__)) agrc, char *agrv[])
{
	printf("%s", agrv[0]);
	return (0);
}
