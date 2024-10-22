#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_alphabet - Print alphabet
 *
 */

void	print_alphabet(void)
{
	int	n;

	n = 0;
	while (n <= 10)
	{
		write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
		n++;
	}
}
