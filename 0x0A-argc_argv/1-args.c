#include <stdio.h>
#include<stdlib.h>
/**
 * main -prints the number of arguments passed on it
 * @agrc: the number of argument supplied to the program
 * @agrv: the  array of pointers to the argument
 *
 * Return:1 the value of the agrument
 */
int main(int agrc, char __attribute__((__unused__)) *agrv[])
{
	printf("%d\n", agrc - 1);
	return (0);
}
