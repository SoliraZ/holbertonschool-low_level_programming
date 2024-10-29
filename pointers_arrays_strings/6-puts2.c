#include "main.h"

/**
 * puts2 - write char 1 of 2
 * @str: String
 */

void	puts2(char *str)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	while (str[l] != '\0')
		l++;
	while (str[i] != '\0' && i <= l)
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
