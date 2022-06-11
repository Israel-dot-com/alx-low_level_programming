#include "main.h"

/**
 * print_square - prints a square on terinal
 * @size: variable input
 * Return: ALways (0)
 */
void print_square(int size)
{
	int i;
	int j;

	j = 0;

	if (size < 1)
		_putchar('\n');

	while (j < size)
	{
		i = 0;

		while (i < size)
		{
			_putchar('#');
			i++;
		}
		_putchar('\n');
		j++;
	}
}
