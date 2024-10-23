#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * ft_printnum - Print numbers.
 *
 * @n: is Int.
 * Description: n is an numbers.
 */

void	ft_printnum(int n)
{
	int n1;
	int n2;

	if (n > 9)
	{
		n1 = n / 10;
		n2 = n % 10;
		_putchar(n1 + 48);
		_putchar(n2 + 48);
	}
	else
	{
		_putchar('0');
		_putchar(n + 48);
	}
}

/**
 * jack_bauer - Print every minute of the day..
 */

void	jack_bauer(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 23)
	{
		j = 0;
		while (j <= 59)
		{
			ft_printnum(i);
			write(1, ":", 1);
			ft_printnum(j);
			write(1, "\n", 1);
			j++;
		}
		i++;
	}
}
