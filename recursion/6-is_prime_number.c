#include "main.h"

/**
 * is_prime_number - Function Prime Number
 * @n: Int
 *
 * Return: 1 if yes, 0 if no.
 */

int	is_prime_number(int n)
{
	int	i;

	i = 2;
	if (n < 2)
		return (0);
	while (i < n && i > 0)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}
