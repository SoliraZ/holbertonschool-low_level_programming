#include "main.h"

/**
 * _strstr - STRSTR Function
 * @haystack: char *
 * @needle: char *
 *
 * Return: Char
 */

char	*_strstr(char *haystack, char *needle)
{
	int	i;
	int	j;

	i = 0;
	if (needle[0] == '\0')
		return (haystack);
	while (haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j] != '\0')
		{
			j++;
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
		i++;
	}
	return ('\0');
}
