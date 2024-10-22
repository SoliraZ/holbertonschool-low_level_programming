#include <stdio.h>
#include "main.h"

/**
 * _abs - Print the absolute value of the number.
 *
 * @n: N is int.
 * Return: 0
 */

int	_abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
	return (0);
}
