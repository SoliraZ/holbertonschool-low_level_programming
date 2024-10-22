#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Print the absolute value of the number.
 *
 * @n: N is int.
 * Return: 0
 */

int	print_last_digit(int n)
{
	if (n < 0)
	{
		n = n % 10;
		printf("%d", n * -1);
		return (n * -1);
	}
	else
	{
		printf("%d", n % 10);
		return (n % 10);
	}
	return (0);
}
