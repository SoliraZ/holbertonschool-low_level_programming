#include "main.h"

/**
 * print_most_numbers - Function Print numbers
 */

void	print_most_numbers(void)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		if (i + '0' == '2' || i + '0' == '4')
			i++;
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
