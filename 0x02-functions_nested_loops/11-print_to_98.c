#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print all naturan numbers to 98
 *
 * @n: Number counter
 * Return: 0
 */
void print_to_98(int n)
{
	int m;

	for (m = n; m <= 98; m++)
	{
		printf("%d, ", m);
	}

}
