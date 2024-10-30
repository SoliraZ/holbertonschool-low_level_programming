#include "main.h"

/**
 * _strncat - Function Strncat
 * @dest: Destination
 * @src: Source
 * @n: Size
 *
 * Return: string
 */

char	*_strncat(char *dest, char *src, int n)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[l] != '\0' && l < n)
	{
		dest[i] = src[l];
		i++;
		l++;
	}
	dest[i] = '\0';
	return (dest);
}
