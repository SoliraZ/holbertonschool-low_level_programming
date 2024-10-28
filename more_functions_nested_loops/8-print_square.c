#include "main.h"

/**
 * print_square - Function Print square.
 * @size: Size of the square.
 */

void	print_square(int size)
{
	int	i;
	int	j;

	i = 0;
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < size)
		{
			j = 0;
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
