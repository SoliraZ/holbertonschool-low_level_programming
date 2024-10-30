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

	i = 0;
	while (src[i])
		i++;
	while (dest[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
