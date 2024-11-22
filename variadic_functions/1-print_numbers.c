#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: void
 */

void	print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int	i;
	int	j;

	i = 0;
	va_start(args, n);
	while (i < n)
	{
		printf("%i", va_arg(args, int));
		j = 0;
		while (separator[j] && i != (n - 1))
		{
			printf("%c", separator[j]);
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
