#include "main.h"

/**
 * _memcpy - Memcpy Function
 * @dest: Char *
 * @src: Char *
 * @n: Unsigned int
 *
 * Return: Char
 */

char	*_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
