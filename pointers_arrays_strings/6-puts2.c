#include "main.h"

/**
 * puts2 - write char 1 of 2
 * @str: String
 */

void	puts2(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		i++;
	}
	_putchar('\n');
}
