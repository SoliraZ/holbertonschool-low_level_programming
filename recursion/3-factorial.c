#include "main.h"

/**
 * recursive_factorial - Recursive Factorial Function
 * @n : Int
 * @i: Int
 *
 * Return: Int
 */

int	recursive_factorial(int i, int n)
{
	i = i * n;
	n--;
	if (n > 0)
		return (recursive_factorial(i, n));
	return (i);
}

/**
 * factorial - Factorial Function in recursive
 * @n : Int
 *
 * Return: Int
 */

int	factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (recursive_factorial(1, n));
}
