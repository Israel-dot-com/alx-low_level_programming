#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - This function creates an array of
 * char and initializes it with a particular char
 *
 * @size: This paramenter holds the size of the array
 * @c: This is the second parameter.
 * Return: Always (0).
 */

int char *create_array(unsigned int size, char c)
{
	int *n;
	unsigned int s;

	n = malloc(sizeof(char) * size);

	if (size == 0 || n == NULL)
		return (NULL);

	for (s = 0; s < size; s++)
		n[i] = c;

	return (n);
}
