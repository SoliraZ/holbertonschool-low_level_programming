#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_alphabet_x10 - Print alphabet x10
 *
 */

void	print_alphabet_x10(void)
{
	int	n;

	n = 0;
	while (n <= 10)
	{
		write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
		n++;
	}
}
