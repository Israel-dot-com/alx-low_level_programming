#include "main.h"
/**
 * rev_string - reverses a string
 *
 * @s: variable holding the pointer
 */
void rev_string(char *s)
{
	
	char *t = s;

	char n[1000];

	int c = 0;

	while (*s != '\0')
	{
		n[c] = *s;

		s++;

		c++;
	}
	c = 0;

	while (s > t)
	{
		s--;
		*s = n[c];
		c++;
	}
}
