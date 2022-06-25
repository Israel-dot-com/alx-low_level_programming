#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 *
 * @r: holds the input to be checked
 *
 * Return: Always (0)
 */

int _abs(int r)
{

	if (r < 0)
	{
		return (r * (-1));
	}
	else if (r == 0)
	{
		return (0);
	}
	else
	{
		return (r);
	}
}
