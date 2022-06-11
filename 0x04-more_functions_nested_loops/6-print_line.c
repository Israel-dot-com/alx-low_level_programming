#include "main.h"
/**
 * print_line - prints a line across screen
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	int underscore;

	for (underscore = 0; underscore < n; ++underscore)
	{
		_putchar('_');
	}
	_putchar('\n');
}
