#include "main.h"
/**
 * print_alphabet_x10 - print the lowercase alphabet x10
 *
 * Return: Always 0.
 *
 */

void print_alphabet_x10(void)
{

	i = 0;

	while (i <= 10)
	{
		char alpha;

		for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	}
	_putchar('\n');
}
