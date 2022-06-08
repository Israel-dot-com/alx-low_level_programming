#include "main.h"
/**
 * print_alphabet_x10 - print the lowercase alphabet x10
 *
 * Return: Always 0.
 *
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 9)
	{
		char alpha;

		for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
		i++;
		_putchar('\n');
	}
}
