#include "main.h"
/**
 * _strl - Resets pointer to 98
 *
 * @s: Pointer to an char
 *
 * Return: (0)
 */

int _strlen(char *s)
{
	int strlen;

	strlen = 0;

	while (*s != 0)
	{
		strlen++;
		s++;
	}
	return (strlen);
}
