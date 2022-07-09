#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Returns the sum of all its params
 * @n: The no of params passed to the main when run
 * @...: A variable no. of paramters to calculate the sum of.
 * Return: Always(0).
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;

	unsigned int index, sum = 0;

	va_start(nums, n);



	for (index = 0; index < n; index++)
		sum += va_arg(nums, int);


	va_end(nums);

	return (sum);
}
