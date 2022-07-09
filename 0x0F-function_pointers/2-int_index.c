#include "function_pointers.h"

/**
 * int_index - Searches for an int in an array of ints
 * @array: The array of the ineteger
 * @size: The size of the array
 * @cmp: A pointer to the function to compare values
 *
 * Return: Always (0)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
