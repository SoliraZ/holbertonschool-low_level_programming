#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * times_table - Table of nine.
 */

void	times_table(void)
{
	int	i;
	int	j;
	int	result;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			result = i * j;
			printf("%d", result);
			if (j < 9)
				printf(", ");
			if ((result < 10) && (j < 9))
				printf(" ");
			j++;
		}
		printf("\n");
		i++;
	}
}
