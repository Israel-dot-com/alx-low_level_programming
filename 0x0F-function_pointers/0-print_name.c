#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Prints a name
 * @name: The name that is printed
 * @f: A pointer to a function that prints a name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
