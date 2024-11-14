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
	int	j;

	i = 0;
	j = 0;
	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	s = malloc(sizeof(char) * (i + 1));
	if (s == NULL)
		return (NULL);
	while (j < i)
	{
		s[j] = str[j];
		j++;
	}
	s[j] = '\0';
	return (s);
}
