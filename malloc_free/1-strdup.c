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
	if (str == NULL)
		return (NULL);
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
