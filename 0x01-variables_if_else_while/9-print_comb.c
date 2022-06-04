#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 *
 */
int main(void)
{
	char comb;

	for (comb = '0'; comb <= '9'; comb++)
	{
	putchar(comb);
	if (comb < '9')
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
