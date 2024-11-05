#include "main.h"

/**
 * _power - Power Function
 * @x: Int
 * @y: Int
 * @i: Int
 *
 * Return: Int
 */

int	_power(int x, int y, int i)
{
	if (y == 0)
		return (1);
	if (y == 1)
		return (i);
	if (y >= 1)
		return (_power(x, y - 1, i * x));
	return (-1);
}

/**
 * _pow_recursion - Power Recursive Function
 * @x: Int
 * @y: Int
 *
 * Return: Int
 */

int	_pow_recursion(int x, int y)
{
	return (_power(x, y, x));
}
