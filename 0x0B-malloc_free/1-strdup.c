#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Duplicate string
 *
 * @str: Duplicate str
 * Return: New Duplicated string
 */

char *_strdup(char *str)
{
	char *ds;
	int i, j;


	if (str == NULL)
		return (NULL);


	for (i = 0; str[i] != '\0'; i++)
		;
	ds = malloc(i * sizeof(*ds) + 1);

	if (ds == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		ds[j] = str[j];

	ds[j] = '\0';


	return (ds);
}
