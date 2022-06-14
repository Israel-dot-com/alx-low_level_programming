#include "main.h"
/**
 * print_rev - Reverse a string
 *
 * @s: Pointer to an int
 *
 */

void print_rev(char *s)
{
	int i = 0;

	while (*s = '\0')
	{
		++s;
		++i;
	}

	while (i > 0)
	{
		--s;
		_putchar('*s');
		--i;
	}

}
