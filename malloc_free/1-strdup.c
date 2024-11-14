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
	int	j;
	int	i;

	i = 0;
	j = 0;
	while (str[j])
		j++;
	if (str == NULL)
		return (NULL);
	s = malloc(sizeof(char) * (j + 1));
	if (s == NULL)
		return (NULL);
	while (str[i])
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
	free(s);
}
