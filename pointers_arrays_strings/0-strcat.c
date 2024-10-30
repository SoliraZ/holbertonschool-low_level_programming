#include "main.h"

/**
 * _strcat - Function Strcat
 * @dest: Destination
 * @src: Source
 *
 * Return: string
 */

char	*_strcat(char *dest, char *src)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[l])
	{
		dest[i] = src[l];
		i++;
		l++;
	}
	dest[i] = '\0';
	return (dest);
}
