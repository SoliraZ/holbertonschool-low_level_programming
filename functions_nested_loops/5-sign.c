#include <stdio.h>
#include "main.h"

/**
 * print_sign - Say if its the n is greater, less or is zero.
 *
 * @n: N is int.
 * Return: 1 if its +, -1 if its - and 0 if its 0
 */

int     print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(0);
		return (0);
	}
	return (0);
}
