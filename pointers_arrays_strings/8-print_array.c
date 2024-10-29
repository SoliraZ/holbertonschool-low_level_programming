#include "main.h"
#include <stdio.h>

/**
 * print_array - Print n elements of an array of int.
 * @a: String
 * @n: number of string
 */

void	print_array(int *a, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
		i++;
	}
	printf("\n");
}
