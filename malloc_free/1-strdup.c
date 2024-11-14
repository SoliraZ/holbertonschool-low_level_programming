#include <stdlib.h>

/**
 * _strdup - Function STRDUP
 * @str: Char *
 *
 * Return: Char
 */

char	*_strdup(char *str)
{
	char	*s;
	int	i;

	i = 0;
	s = (char *)malloc(sizeof(char));
	if (s == NULL)
		return (NULL);
	while (str[i])
	{
		s[i] = str[i];
		i++;
	}
	return (s);
}
