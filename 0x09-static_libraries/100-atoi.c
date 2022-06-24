#include "main.h"

/**
 * _atoi - convert a number in a string to an integer
 *
 * @s: String to be converted
 *
 * Return: converted integer OR 0 if none
 */

int _atoi(char *s)
{
	int i = 1;

	int j = 0;

	while (s[0] != '\0')
	{
		if (s[0] == '-')

			i *= -1;

		else if (s[0] >= '0' && s[0] <= '9')

			j = (j * 10) + (s[0] - '0') * i;

		else if (j)

			break;
		s++;
	}

