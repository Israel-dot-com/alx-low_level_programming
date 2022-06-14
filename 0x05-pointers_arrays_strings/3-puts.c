#include "main.h"
/**
 * _puts - Resets pointer to 98
 *
 * @i: counts string index
 *
 * @str: pointer to a char
 */

void _puts(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		++i;
	}
	_putchar('\n');
}
