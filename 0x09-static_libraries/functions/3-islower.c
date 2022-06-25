#include "main.h"
/**
 * _islower - Returns lower number with getchar.
 *
 * @c: input to be checked
 *
 * Return: Always (0).
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
