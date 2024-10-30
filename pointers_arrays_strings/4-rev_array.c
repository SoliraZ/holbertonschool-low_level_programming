#include "main.h"

/**
 * reverse_array - Reverse an array of int
 * @a: Int
 * @n: Int
 */

void	reverse_array(int *a, int n)
{
	int	temp;
	int	i;

	i = 0;
	while (i < (n / 2))
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
		i++;
	}
}
