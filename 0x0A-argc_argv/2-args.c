#include "main.h"
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

	int i;
	while (i < argc)
		printf("%s\n", argv[i++]);
	return (0);
}
