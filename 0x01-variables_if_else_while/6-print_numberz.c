#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 *
 */
int main(void)
{

	int numz;

	numz = '0';

	for (numz = '0'; numz <= '9'; ++numz)
	{
		putchar(numz);
	}
	putchar('\n');
	return (0);
}
