#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * @argc: Argument Counter
 *
 * @argv: Argument Vector
 *
 * Return: Always (0)
 */

int main(int argc, char *argv[])
{
	int main(int argc, char *argv[])
{
	int total, i;
	char *p;
	int num;

	total = 0;
	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			num = strtol(argv[i], &p, 10);
			if (!*p)
				total += num;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", total);
	return (0);

	return (0);
}
