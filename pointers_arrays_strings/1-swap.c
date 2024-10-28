#include "main.h"

/**
 * swap_int - Swap two int
 * @a: Int
 * @b: Int
 */

void	swap_int(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
