#include "main.h"

/**
 * _isalpha - Returns values based on whether input is upper or lowercase
 *
 * @c: variable getting checked.
 *
 * Return: Always (0).
 */

int _isalpha(int c);
{
	if (c >= 'a' || c <= 'z' || c >= "A" || c <= 'Z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
