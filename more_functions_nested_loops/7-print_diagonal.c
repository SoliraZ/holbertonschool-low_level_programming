#include "main.h"

/**
 * print_diagonal - Function Print diagonal
 * @n: Int
 */

void	print_diagonal(int n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (n <= 0)
		_putchar('\n');
	else
	{
		while (i < n)
		{
			j = 0;
			while (j <= i)
			{
				if (j == i)
					_putchar('\\');
				else
				{
					_putchar(' ');
				}
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
