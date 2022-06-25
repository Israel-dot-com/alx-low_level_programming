#include "main.h"
/**
 * _strlen - Returns the lengh of the string that was passed
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
