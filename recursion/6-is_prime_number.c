#include "main.h"

/**
 * r_is_prime_number - Function Prime Number
 * @n: Int
 * @i: Int
 *
 * Return: 1 if yes, 0 if no.
 */

int	r_is_prime_number(int n, int i)
{
	if (n == i)
		return (1);
	if (n % i == 0)
		return (0);
	if (n % i != 0)
		return (r_is_prime_number(n, i + 1));
	return (0);
}
/**
 * is_prime_number - Function Prime Number
 * @n: Int
 *
 * Return: 1 if yes, 0 if no.
 */

int	is_prime_number(int n)
{
	if (n < 0)
		return (0);
	if (n == 0 || n == 1)
		return (0);
	return (r_is_prime_number(n, 2));
}
