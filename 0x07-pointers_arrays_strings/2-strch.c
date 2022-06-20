#include "main.h"
/**
 * _strchr - Locates a character in a string
 *
 * @s: string s
 *
 * @c: character c
 *
 * Return: Always(0)
 */
char *_strchr(char *s, char c);
{
	while (*s)
	{
		s++;

		if (*s == c)
		{
			return (s);
		}
	}
}
