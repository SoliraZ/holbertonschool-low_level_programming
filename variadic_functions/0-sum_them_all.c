#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 *
 * Return: sum of all parameters
 */

int	sum_them_all(const unsigned int n, ...)
{
	va_list	args;
	unsigned int	i;
	int	result;

	i = 0;
	result = 0;
	va_start(args, n);
	while (i < n)
	{
		result += va_arg(args, int);
		i++;
	}
	va_end(args);
	return (result);
}
