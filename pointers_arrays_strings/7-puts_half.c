#include "main.h"

/**
 * puts_half - Print Half of string
 * @str: String
 */

void	puts_half(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	i = i / 2;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
