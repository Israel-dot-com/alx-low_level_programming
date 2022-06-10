#include "main.h"
/**
 * print_numbers - prints 0-9
 * @i: int for the loop
 * Return: (0)
 */
void print_numbers(void)
{
	int i;

	i = 0;

	while (i <= 9)
	{
		_putchar(i);
	}

	_putchar('\n');
}
