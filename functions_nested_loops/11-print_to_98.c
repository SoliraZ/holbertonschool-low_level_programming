#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Print n to 98
 * @n: Numbers
 */

void	print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n < 98)
				printf("%i, ", n);
			else
				printf("%i\n", n);
			n++;
		}
	}
	else
		while (n >= 98)
		{
			if (n > 98)
				printf("%i, ", n);
			else
				printf("%i\n", n);
			n--;
		}
}
