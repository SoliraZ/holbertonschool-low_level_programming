#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Print Diagsums Function
 * @a: Int *
 * @size: Int
 */

void	print_diagsums(int *a, int size)
{
	int i;
	int res1;
	int res2;

	i = 0;
	res1 = 0;
	res2 = 0;
	while (i < size)
	{
		res1 = res1 + a[i * size + i];
		res2 = res2 + a[i * size + (size - i - 1)];
		i++;
	}
	printf("%d, %d\n", res1, res2);
}
