#include "main.h"

/**
 * print_triangle - Function Print triangle
 * @size: Int
 */

void    print_triangle(int size)
{
	int     i;
	int     j;

	i = 1;
	if (size <= 0)
		_putchar('\n');
	else
	{
		while (i <= size)
		{
			j = i;
			while (j < size)
			{
				_putchar(' ');
				j++;
			}
			j = 1;
			while (j <= i)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
