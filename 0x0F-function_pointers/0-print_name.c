#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name- a function that prints a name
 * @name: pointer to name
 * @f: pointer to function
 *
 * Return: name given
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
