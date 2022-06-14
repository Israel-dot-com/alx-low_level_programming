#include "main.h"
/**
 * puts2 - prints every even index of character
 *
 *
 * @str: variable holding the pointer
 */
void puts2(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (i % 2)
		{
			_putchar(str[i]);
		}
		i++;
	}
}

