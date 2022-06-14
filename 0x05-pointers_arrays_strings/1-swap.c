#include "main.h"
/**
 * swap_int - Resets pointer to 98
 *
 * @b: variable b getting swapped
 *
 * @a: variable a getting swapped
 */
void swap_int(int *a, int *b)
{
	int holder;

	holder = *b;

	*a = *b;

	*b = holder;
}
