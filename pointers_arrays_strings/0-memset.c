#include "main.h"

/**
 * _memset - Memset Function
 * @s: Char
 * @b: Char
 * @n: Unsigned Int
 *
 * Return: char
 */

char	*_memset(char *s, char b, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
