#include "main.h"

/**
 * _sqrt - SQRT Function
 * @n: Int
 * @i: Int
 *
 * Return: Int
 */

int	_sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i < n)
		return (_sqrt(n, i + 1));
	return (-1);
}

/**
 * _sqrt_recursion - SQRT Recursive Function
 * @n: Int
 *
 * Return: Int
 */

int	_sqrt_recursion(int n)
{
	return (_sqrt(n, 0));
}
